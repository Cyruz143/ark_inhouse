#ifndef HTTP_H
#define HTTP_H

#include <string>
#include <mutex>


namespace ark_asm {

    const std::string MISSION_INIT_PATH = "/mission-init";
    const std::string MISSION_SNAPSHOT_PATH = "/mission-snapshot";

    struct Request;
    struct Response;

namespace http {

    bool initialize(int processId, const std::string& host_, uint32_t port_, const std::string& username_, const std::string& password_);
    void finalize();
    void run();
    bool isRunning();
    Response processRequest(const Request& request);

} // namespace http
} // namespace ark_asm

#endif // HTTP_H
