#ifndef EXTENSION_H
#define EXTENSION_H

#include "http.h"
#include "Queue/Queue.h"


#define ARK_ASM_EXTENSION_VERSION       "1.0.0"

namespace ark_asm {

    const std::string REQUEST_COMMAND_POISON = "poison";

    const int RESPONSE_RETURN_CODE_ERROR = -1;
    const int RESPONSE_RETURN_CODE_OK = 0;

    const std::string EMPTY_SQF_DATA = "\"\"";

    struct Request {
        std::string command;
        std::vector<std::string> params;
    };

    struct Response {
        int returnCode;
        std::string data;
    };

namespace extension {

    bool initialize(int processId);
    void finalize();
    int call(char *output, int outputSize, const char *function, const char **args, int argCount);
    Request popRequest();

} // namespace extension
} // namespace ark_asm

#endif // EXTENSION_H