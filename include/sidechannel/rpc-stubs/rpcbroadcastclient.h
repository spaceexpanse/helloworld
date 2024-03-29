/**
 * This file is generated by jsonrpcstub, DO NOT CHANGE IT MANUALLY!
 */

#ifndef JSONRPC_CPP_STUB_RPCBROADCASTCLIENT_H_
#define JSONRPC_CPP_STUB_RPCBROADCASTCLIENT_H_

#include <jsonrpccpp/client.h>

class RpcBroadcastClient : public jsonrpc::Client
{
    public:
        RpcBroadcastClient(jsonrpc::IClientConnector &conn, jsonrpc::clientVersion_t type = jsonrpc::JSONRPC_CLIENT_V2) : jsonrpc::Client(conn, type) {}

        void send(const std::string& channel, const std::string& message) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["channel"] = channel;
            p["message"] = message;
            this->CallNotification("send",p);
        }
        Json::Value getseq(const std::string& channel) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["channel"] = channel;
            Json::Value result = this->CallMethod("getseq",p);
            if (result.isObject())
                return result;
            else
                throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());
        }
        Json::Value receive(const std::string& channel, int fromseq) throw (jsonrpc::JsonRpcException)
        {
            Json::Value p;
            p["channel"] = channel;
            p["fromseq"] = fromseq;
            Json::Value result = this->CallMethod("receive",p);
            if (result.isObject())
                return result;
            else
                throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());
        }
};

#endif //JSONRPC_CPP_STUB_RPCBROADCASTCLIENT_H_
