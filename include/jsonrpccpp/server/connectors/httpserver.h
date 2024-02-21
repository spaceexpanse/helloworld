/*************************************************************************
 * libjson-rpc-cpp
 *************************************************************************
 * @file    httpserver.h
 * @date    31.12.2012
 * @author  Peter Spiess-Knafl <peter.knafl@gmail.com>
 * @license See attached LICENSE.txt
 ************************************************************************/

#ifndef JSONRPC_CPP_HTTPSERVERCONNECTOR_H_
#define JSONRPC_CPP_HTTPSERVERCONNECTOR_H_

#include <stdarg.h>
#include <stdint.h>
#include <sys/types.h>
#if defined(_WIN32) && !defined(__CYGWIN__)
#include <ws2tcpip.h>
#include <winsock2.h>
#if defined(_MSC_FULL_VER) && !defined (_SSIZE_T_DEFINED)
#define _SSIZE_T_DEFINED
typedef intptr_t ssize_t;
#endif // !_SSIZE_T_DEFINED */
#else
#include <netdb.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/socket.h>
#endif

#include <map>
#include <microhttpd.h>
#include "../abstractserverconnector.h"

namespace jsonrpc
{
    /**
     * This class provides an embedded HTTP Server, based on libmicrohttpd, to handle incoming Requests and send HTTP 1.1
     * valid responses.
     * Note that this class will always send HTTP-Status 200, even though an JSON-RPC Error might have occurred. Please
     * always check for the JSON-RPC Error Header.
     */
    class HttpServer: public AbstractServerConnector
    {
        public:

            /**
             * @brief HttpServer, constructor for the included HttpServer
             * @param port on which the server is listening
             * @param enableSpecification - defines if the specification is returned in case of a GET request
             * @param sslcert - defines the path to a SSL certificate, if this path is != "", then SSL/HTTPS is used with the given certificate.
             */
            HttpServer(int port, const std::string& sslcert = "", const std::string& sslkey = "", int threads = 50);

            ~HttpServer();

            virtual bool StartListening();
            virtual bool StopListening();

            bool
            BindLocalhost ()
            {
              return SetBindAddress ("127.0.0.1");
            }

            bool virtual SendResponse(const std::string& response,
                    void* addInfo = NULL);
            bool virtual SendOptionsResponse(void* addInfo);

            void SetUrlHandler(const std::string &url, IClientConnectionHandler *handler);

        private:
            int port;
            int threads;
            bool running;
            struct addrinfo* bind_address = nullptr;
            std::string path_sslcert;
            std::string path_sslkey;
            std::string sslcert;
            std::string sslkey;

            struct MHD_Daemon *daemon;

            std::map<std::string, IClientConnectionHandler*> urlhandler;

            /**
             * Sets the address at which the server will bind when started.
             * By default, the server listens at all interfaces.  If this
             * method is called with a non-empty string before starting the
             * server, then it will only bind to the specified address.
             * This method returns true on success and false if the given
             * address could not be set as bind address.
             */
            bool SetBindAddress(const std::string& addr);

            static int callback(void *cls, struct MHD_Connection *connection, const char *url, const char *method, const char *version, const char *upload_data, size_t *upload_data_size, void **con_cls);

            IClientConnectionHandler* GetHandler(const std::string &url);

    };

} /* namespace jsonrpc */
#endif /* JSONRPC_CPP_HTTPSERVERCONNECTOR_H_ */
