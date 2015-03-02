#ifndef RS_LIBHTTPSERVER_EXCEPTIONS_H
#define	RS_LIBHTTPSERVER_EXCEPTIONS_H

#include <exception>

namespace rs {
namespace httpserver {

class HttpServerException : public std::exception {
};

class InvalidBufferDataLengthException : public HttpServerException {
public:
    virtual const char* what() const noexcept override {
        return what_;
    }    
private:
    const char* what_ = "Invalid buffer data length specified";
};

class HeaderTimeoutException : public HttpServerException {
public:
    virtual const char* what() const noexcept override {
        return what_;
    }    
private:
    const char* what_ = "Timed out waiting for request headers";
};

}}

#endif	/* RS_LIBHTTPSERVER_EXCEPTIONS_H */
