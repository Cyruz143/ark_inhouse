#include "extension.h"

#include <fstream>
#include <regex>

#ifdef _WIN32
#include "shlobj.h"
#endif

#include "log.h"

#include "Poco/Environment.h"
#include "Poco/Path.h"
#include "Poco/File.h"
#include "Poco/StringTokenizer.h"
#include "Poco/UnicodeConverter.h"
#include "Poco/Util/PropertyFileConfiguration.h"


namespace ark_asm {
namespace extension {

namespace {
    const std::string EXTENSION_FOLDER_ENV_VAR = "ARK_ASM_EXTENSION_HOME";
    const std::string EXTENSION_FOLDER = "ArkAsmExtension";
    const std::string CONFIG_FILE = "config.properties";

    Queue<Request> requests;
    std::thread httpThread;
    std::string configError = "";
}

    void respond(char* output, const std::string& data) {
        data.copy(output, data.length());
        output[data.length()] = '\0';
    }

    std::string getExtensionFolder() {
        if (Poco::Environment::has(EXTENSION_FOLDER_ENV_VAR)) {
            return Poco::Environment::get(EXTENSION_FOLDER_ENV_VAR);
        }
#ifdef _WIN32
        std::string extensionFolder = fmt::format(".{}", Poco::Path::separator());
        wchar_t wpath[MAX_PATH];
        if (!SUCCEEDED(SHGetFolderPathW(NULL, CSIDL_LOCAL_APPDATA, NULL, 0, wpath))) {
            return extensionFolder;
        }
        Poco::UnicodeConverter::toUTF8(wpath, extensionFolder);
#else
        std::string extensionFolder = Poco::Environment::get("HOME", ".");
#endif
        Poco::File file(fmt::format("{}{}{}", extensionFolder, Poco::Path::separator(), EXTENSION_FOLDER));
        file.createDirectories();
        return file.path();
    }

    std::string getStringProperty(Poco::AutoPtr<Poco::Util::PropertyFileConfiguration> config, const std::string& key) {
        if (!config->has(key)) {
            std::string message = fmt::format("Config file is missing property '{}'.", key);
            configError += " " + message;
            log::logger->error(message);
            return "";
        }
        return config->getString(key);
    }

    uint32_t getUIntProperty(Poco::AutoPtr<Poco::Util::PropertyFileConfiguration> config, const std::string& key) {
        if (!config->has(key)) {
            std::string message = fmt::format("Config file is missing property '{}'!", key);
            configError += " " + message;
            log::logger->error(message);
            return 0;
        }
        try {
            return config->getUInt(key);
        } catch (Poco::SyntaxException e) {
            std::string message = fmt::format("Property '{}' value '{}' is not a number!", key, config->getString(key));
            configError += " " + message;
            log::logger->error(message);
            return 0;
        }
    }

    void stripDoubleQuotedParams(std::vector<std::string>& params) {
        for (auto&& param : params) {
            if (param.length() >= 2 && param.front() == '"' && param.back() == '"') {
                param.erase(0, 1);
                param.pop_back();
            }
        }
    }

    bool initialize(int processId) {
        std::string extensionFolder(getExtensionFolder());
        std::string configFilePath(fmt::format("{}{}{}", extensionFolder, Poco::Path::separator(), CONFIG_FILE));
        Poco::File file(configFilePath);
        if (!file.exists()) {
            std::string message = fmt::format("Config file is missing from '{}'!", configFilePath);
            configError += message;
            log::initialze(extensionFolder, "info");
            log::logger->error(message);
            return false;
        }
        Poco::AutoPtr<Poco::Util::PropertyFileConfiguration> config(new Poco::Util::PropertyFileConfiguration(configFilePath));

        std::string logLevel = config->getString("ark_asm.log.level", "info");
        log::initialze(extensionFolder, logLevel);

        std::string host = getStringProperty(config, "ark_asm.server.host");
        uint32_t port = getUIntProperty(config, "ark_asm.server.port");
        std::string username = getStringProperty(config, "ark_asm.server.username");
        std::string password = getStringProperty(config, "ark_asm.server.password");
        
        http::initialize(processId, host, port, username, password);

        log::logger->info("Starting ark_asm_extension version '{}'.", ARK_ASM_EXTENSION_VERSION);
        return true;
    }

    void finalize() {
        if (http::isRunning()) {
            requests.push(Request{ REQUEST_COMMAND_POISON });
            httpThread.join();
            http::finalize();
        }
        log::logger->info("Stopped ark_asm_extension version '{}'.", ARK_ASM_EXTENSION_VERSION);
    }

    int call(char* output, int outputSize, const char* function, const char **args, int argCount) {
        if (!configError.empty()) {
            respond(output, fmt::format("\"{}\"", configError));
            return RESPONSE_RETURN_CODE_ERROR;
        }
        Request request{ "" };
        request.command = std::string(function);
        request.params.insert(request.params.end(), args, args + argCount);
        stripDoubleQuotedParams(request.params);
        log::logger->trace("Command '{}', params size '{}'.", request.command, request.params.size());
        if (request.command == "version") {
            respond(output, fmt::format("\"{}\"", ARK_ASM_EXTENSION_VERSION));
            return RESPONSE_RETURN_CODE_OK;
        }
        else if (request.command == "mission.init") {
            if (!http::isRunning()) {
                httpThread = std::thread(http::run);
            }
            requests.push(request);
            respond(output, EMPTY_SQF_DATA);
            return RESPONSE_RETURN_CODE_OK;
        }
        else if (request.command == "mission.snapshot") {
            requests.push(request);
            respond(output, EMPTY_SQF_DATA);
            return RESPONSE_RETURN_CODE_OK;
        }
        respond(output, "\"Unkown command\"");
        return RESPONSE_RETURN_CODE_ERROR;
    }

    Request popRequest() {
        return requests.pop();
    }

} // namespace extension
} // namespace ark_asm
