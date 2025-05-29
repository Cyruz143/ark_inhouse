#include "extension.h"

//#define ARK_ASM_CONSOLE
#ifndef ARK_ASM_CONSOLE

// Windows
#ifdef _WIN32

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
    switch (fdwReason) {
    case DLL_PROCESS_ATTACH:
        ark_asm::extension::initialize(GetCurrentProcessId());
        break;

    case DLL_PROCESS_DETACH:
        ark_asm::extension::finalize();
        break;
    }
    return true;
}

extern "C" {
    __declspec(dllexport) void __stdcall RVExtension(char *output, int outputSize, const char *function);
    __declspec(dllexport) int __stdcall RVExtensionArgs(char *output, int outputSize, const char *function, const char **args, int argCnt);
};

void __stdcall RVExtension(char *output, int outputSize, const char *function) {
    outputSize -= 1;
    ark_asm::extension::call(output, outputSize, function, nullptr, 0);
};

int __stdcall RVExtensionArgs(char *output, int outputSize, const char *function, const char **args, int argCnt) {
    outputSize -= 1;
    return ark_asm::extension::call(output, outputSize, function, args, argCnt);
};

// Linux with GCC
#else

extern "C" {
    void RVExtension(char *output, int outputSize, const char *function);
    int RVExtensionArgs(char *output, int outputSize, const char *function, const char **args, int argCnt);
}

void RVExtension(char *output, int outputSize, const char *function) {
    outputSize -= 1;
    ark_asm::extension::call(output, outputSize, function);
}

__attribute__((constructor))
static void extension_init() {
    ark_asm::extension::initialize();
}

__attribute__((destructor))
static void extension_finalize() {
    ark_asm::extension::finalize();
}

#endif

#else

#include <iostream>
#include <string>
#include <regex>

#ifdef _WIN32
    #define WIN32_LEAN_AND_MEAN
    #include <windows.h>
#elif
#endif

int main(int argc, char* argv[]) {
    std::string line = "";
    const int outputSize = 10000;
    char *output = new char[outputSize];

#ifdef _WIN32
    ark_asm::extension::initialize(GetCurrentProcessId());
#elif
#endif
    std::cout
        << "Type 'exit' to close console." << std::endl
        << "Use it as <command>:<param1>,<param2>... (No support for escaping ':' and ',')" << std::endl
        << std::endl << std::endl;
    while (line != "exit") {
        std::getline(std::cin, line);
        std::regex commandSeparatorRegex(":");
        std::regex paramSeparatorRegex(",");

        std::vector<std::string> commandAndParams;
        commandAndParams = { std::sregex_token_iterator(line.begin(), line.end(), commandSeparatorRegex, -1), std::sregex_token_iterator() };
        std::string command = commandAndParams[0];

        std::vector<std::string> params;
        if (commandAndParams.size() >= 2) {
            params = { std::sregex_token_iterator(commandAndParams[1].begin(), commandAndParams[1].end(), paramSeparatorRegex, -1), std::sregex_token_iterator() };
        }
        
        char** args = new char*[params.size()];
        for (size_t i = 0; i < params.size(); i++) {
            args[i] = new char[params[i].size() + 1];
            strcpy(args[i], params[i].c_str());
        }
        const char** constArgs = const_cast<const char**>(args);

        ark_asm::extension::call(output, outputSize, command.c_str(), constArgs, params.size());
        std::cout << "ARK_ASM: " << output << std::endl;

        for (size_t i = 0; i < params.size(); i++) {
            delete[] args[i];
        }
        delete[] args;
    }
    ark_asm::extension::finalize();
    return 0;
}



#endif