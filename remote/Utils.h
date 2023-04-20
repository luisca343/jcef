#ifndef JCEF_UTILS_H
#define JCEF_UTILS_H

#include "./gen-cpp/ClientHandlers.h"

class BackwardConnection {
  std::shared_ptr<thrift_codegen::ClientHandlersClient> myClientHandlers = nullptr;
  std::shared_ptr<apache::thrift::transport::TTransport> myTransport;

 public:
  BackwardConnection();

  void close();
  std::shared_ptr<thrift_codegen::ClientHandlersClient> getHandlersService() { return myClientHandlers; }
};

class ConnectionUser {
 public:
  explicit ConnectionUser(std::shared_ptr<BackwardConnection> backwardConnection):
        myBackwardConnection(backwardConnection) {}

 protected:
  std::shared_ptr<thrift_codegen::ClientHandlersClient> getService(); // logs error when null
  void onThriftException(apache::thrift::TException e);

 private:
  std::shared_ptr<BackwardConnection> myBackwardConnection;
};


#endif  // JCEF_UTILS_H
