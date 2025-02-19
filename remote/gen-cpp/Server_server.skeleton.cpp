// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "Server.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using namespace  ::thrift_codegen;

class ServerHandler : virtual public ServerIf {
 public:
  ServerHandler() {
    // Your initialization goes here
  }

  int32_t connect(const std::string& backwardConnectionPipe, const bool isMaster) {
    // Your implementation goes here
    printf("connect\n");
  }

  int32_t connectTcp(const int32_t backwardConnectionPort, const bool isMaster) {
    // Your implementation goes here
    printf("connectTcp\n");
  }

  void log(const std::string& msg) {
    // Your implementation goes here
    printf("log\n");
  }

  void echo(std::string& _return, const std::string& msg) {
    // Your implementation goes here
    printf("echo\n");
  }

  void version(std::string& _return) {
    // Your implementation goes here
    printf("version\n");
  }

  void state(std::string& _return) {
    // Your implementation goes here
    printf("state\n");
  }

  void stop() {
    // Your implementation goes here
    printf("stop\n");
  }

  int32_t createBrowser(const int32_t cid, const int32_t handlersMask) {
    // Your implementation goes here
    printf("createBrowser\n");
  }

  void startBrowserCreation(const int32_t bid, const std::string& url) {
    // Your implementation goes here
    printf("startBrowserCreation\n");
  }

  void closeBrowser(const int32_t bid) {
    // Your implementation goes here
    printf("closeBrowser\n");
  }

  void Browser_Reload(const int32_t bid) {
    // Your implementation goes here
    printf("Browser_Reload\n");
  }

  void Browser_ReloadIgnoreCache(const int32_t bid) {
    // Your implementation goes here
    printf("Browser_ReloadIgnoreCache\n");
  }

  void Browser_LoadURL(const int32_t bid, const std::string& url) {
    // Your implementation goes here
    printf("Browser_LoadURL\n");
  }

  void Browser_GetURL(std::string& _return, const int32_t bid) {
    // Your implementation goes here
    printf("Browser_GetURL\n");
  }

  void Browser_ExecuteJavaScript(const int32_t bid, const std::string& code, const std::string& url, const int32_t line) {
    // Your implementation goes here
    printf("Browser_ExecuteJavaScript\n");
  }

  void Browser_WasResized(const int32_t bid) {
    // Your implementation goes here
    printf("Browser_WasResized\n");
  }

  void Browser_NotifyScreenInfoChanged(const int32_t bid) {
    // Your implementation goes here
    printf("Browser_NotifyScreenInfoChanged\n");
  }

  void Browser_SendKeyEvent(const int32_t bid, const int32_t event_type, const int32_t modifiers, const int16_t key_char, const int64_t scanCode, const int32_t key_code) {
    // Your implementation goes here
    printf("Browser_SendKeyEvent\n");
  }

  void Browser_SendMouseEvent(const int32_t bid, const int32_t event_type, const int32_t x, const int32_t y, const int32_t modifiers, const int32_t click_count, const int32_t button) {
    // Your implementation goes here
    printf("Browser_SendMouseEvent\n");
  }

  void Browser_SendMouseWheelEvent(const int32_t bid, const int32_t scroll_type, const int32_t x, const int32_t y, const int32_t modifiers, const int32_t delta, const int32_t units_to_scroll) {
    // Your implementation goes here
    printf("Browser_SendMouseWheelEvent\n");
  }

  bool Browser_CanGoForward(const int32_t bid) {
    // Your implementation goes here
    printf("Browser_CanGoForward\n");
  }

  bool Browser_CanGoBack(const int32_t bid) {
    // Your implementation goes here
    printf("Browser_CanGoBack\n");
  }

  void Browser_GoBack(const int32_t bid) {
    // Your implementation goes here
    printf("Browser_GoBack\n");
  }

  void Browser_GoForward(const int32_t bid) {
    // Your implementation goes here
    printf("Browser_GoForward\n");
  }

  bool Browser_IsLoading(const int32_t bid) {
    // Your implementation goes here
    printf("Browser_IsLoading\n");
  }

  void Browser_StopLoad(const int32_t bid) {
    // Your implementation goes here
    printf("Browser_StopLoad\n");
  }

  int32_t Browser_GetFrameCount(const int32_t bid) {
    // Your implementation goes here
    printf("Browser_GetFrameCount\n");
  }

  bool Browser_IsPopup(const int32_t bid) {
    // Your implementation goes here
    printf("Browser_IsPopup\n");
  }

  bool Browser_HasDocument(const int32_t bid) {
    // Your implementation goes here
    printf("Browser_HasDocument\n");
  }

  void Browser_ViewSource(const int32_t bid) {
    // Your implementation goes here
    printf("Browser_ViewSource\n");
  }

  void Browser_GetSource(const int32_t bid, const  ::thrift_codegen::RObject& stringVisitor) {
    // Your implementation goes here
    printf("Browser_GetSource\n");
  }

  void Browser_GetText(const int32_t bid, const  ::thrift_codegen::RObject& stringVisitor) {
    // Your implementation goes here
    printf("Browser_GetText\n");
  }

  void Browser_SetFocus(const int32_t bid, const bool enable) {
    // Your implementation goes here
    printf("Browser_SetFocus\n");
  }

  double Browser_GetZoomLevel(const int32_t bid) {
    // Your implementation goes here
    printf("Browser_GetZoomLevel\n");
  }

  void Browser_SetZoomLevel(const int32_t bid, const double val) {
    // Your implementation goes here
    printf("Browser_SetZoomLevel\n");
  }

  void Browser_StartDownload(const int32_t bid, const std::string& url) {
    // Your implementation goes here
    printf("Browser_StartDownload\n");
  }

  void Browser_Find(const int32_t bid, const std::string& searchText, const bool forward, const bool matchCase, const bool findNext) {
    // Your implementation goes here
    printf("Browser_Find\n");
  }

  void Browser_StopFinding(const int32_t bid, const bool clearSelection) {
    // Your implementation goes here
    printf("Browser_StopFinding\n");
  }

  void Browser_ReplaceMisspelling(const int32_t bid, const std::string& word) {
    // Your implementation goes here
    printf("Browser_ReplaceMisspelling\n");
  }

  void Browser_SetFrameRate(const int32_t bid, const int32_t val) {
    // Your implementation goes here
    printf("Browser_SetFrameRate\n");
  }

  void Request_Update(const  ::thrift_codegen::RObject& request) {
    // Your implementation goes here
    printf("Request_Update\n");
  }

  void Request_GetPostData( ::thrift_codegen::PostData& _return, const  ::thrift_codegen::RObject& request) {
    // Your implementation goes here
    printf("Request_GetPostData\n");
  }

  void Request_SetPostData(const  ::thrift_codegen::RObject& request, const  ::thrift_codegen::PostData& postData) {
    // Your implementation goes here
    printf("Request_SetPostData\n");
  }

  void Request_GetHeaderByName(std::string& _return, const  ::thrift_codegen::RObject& request, const std::string& name) {
    // Your implementation goes here
    printf("Request_GetHeaderByName\n");
  }

  void Request_SetHeaderByName(const  ::thrift_codegen::RObject& request, const std::string& name, const std::string& value, const bool overwrite) {
    // Your implementation goes here
    printf("Request_SetHeaderByName\n");
  }

  void Request_GetHeaderMap(std::map<std::string, std::string> & _return, const  ::thrift_codegen::RObject& request) {
    // Your implementation goes here
    printf("Request_GetHeaderMap\n");
  }

  void Request_SetHeaderMap(const  ::thrift_codegen::RObject& request, const std::map<std::string, std::string> & headerMap) {
    // Your implementation goes here
    printf("Request_SetHeaderMap\n");
  }

  void Request_Set(const  ::thrift_codegen::RObject& request, const std::string& url, const std::string& method, const  ::thrift_codegen::PostData& postData, const std::map<std::string, std::string> & headerMap) {
    // Your implementation goes here
    printf("Request_Set\n");
  }

  void Response_Update(const  ::thrift_codegen::RObject& response) {
    // Your implementation goes here
    printf("Response_Update\n");
  }

  void Response_GetHeaderByName(std::string& _return, const  ::thrift_codegen::RObject& response, const std::string& name) {
    // Your implementation goes here
    printf("Response_GetHeaderByName\n");
  }

  void Response_SetHeaderByName(const  ::thrift_codegen::RObject& response, const std::string& name, const std::string& value, const bool overwrite) {
    // Your implementation goes here
    printf("Response_SetHeaderByName\n");
  }

  void Response_GetHeaderMap(std::map<std::string, std::string> & _return, const  ::thrift_codegen::RObject& response) {
    // Your implementation goes here
    printf("Response_GetHeaderMap\n");
  }

  void Response_SetHeaderMap(const  ::thrift_codegen::RObject& response, const std::map<std::string, std::string> & headerMap) {
    // Your implementation goes here
    printf("Response_SetHeaderMap\n");
  }

  void Callback_Dispose(const  ::thrift_codegen::RObject& callback) {
    // Your implementation goes here
    printf("Callback_Dispose\n");
  }

  void Callback_Continue(const  ::thrift_codegen::RObject& callback) {
    // Your implementation goes here
    printf("Callback_Continue\n");
  }

  void Callback_Cancel(const  ::thrift_codegen::RObject& callback) {
    // Your implementation goes here
    printf("Callback_Cancel\n");
  }

  void AuthCallback_Dispose(const  ::thrift_codegen::RObject& authCallback) {
    // Your implementation goes here
    printf("AuthCallback_Dispose\n");
  }

  void AuthCallback_Continue(const  ::thrift_codegen::RObject& authCallback, const std::string& username, const std::string& password) {
    // Your implementation goes here
    printf("AuthCallback_Continue\n");
  }

  void AuthCallback_Cancel(const  ::thrift_codegen::RObject& authCallback) {
    // Your implementation goes here
    printf("AuthCallback_Cancel\n");
  }

  void MessageRouter_Create( ::thrift_codegen::RObject& _return, const std::string& query, const std::string& cancel) {
    // Your implementation goes here
    printf("MessageRouter_Create\n");
  }

  void MessageRouter_Dispose(const  ::thrift_codegen::RObject& msgRouter) {
    // Your implementation goes here
    printf("MessageRouter_Dispose\n");
  }

  void MessageRouter_AddMessageRouterToBrowser(const  ::thrift_codegen::RObject& msgRouter, const int32_t bid) {
    // Your implementation goes here
    printf("MessageRouter_AddMessageRouterToBrowser\n");
  }

  void MessageRouter_RemoveMessageRouterFromBrowser(const  ::thrift_codegen::RObject& msgRouter, const int32_t bid) {
    // Your implementation goes here
    printf("MessageRouter_RemoveMessageRouterFromBrowser\n");
  }

  void MessageRouter_AddHandler(const  ::thrift_codegen::RObject& msgRouter, const  ::thrift_codegen::RObject& handler, const bool first) {
    // Your implementation goes here
    printf("MessageRouter_AddHandler\n");
  }

  void MessageRouter_RemoveHandler(const  ::thrift_codegen::RObject& msgRouter, const  ::thrift_codegen::RObject& handler) {
    // Your implementation goes here
    printf("MessageRouter_RemoveHandler\n");
  }

  void MessageRouter_CancelPending(const  ::thrift_codegen::RObject& msgRouter, const int32_t bid, const  ::thrift_codegen::RObject& handler) {
    // Your implementation goes here
    printf("MessageRouter_CancelPending\n");
  }

  void QueryCallback_Dispose(const  ::thrift_codegen::RObject& qcallback) {
    // Your implementation goes here
    printf("QueryCallback_Dispose\n");
  }

  void QueryCallback_Success(const  ::thrift_codegen::RObject& qcallback, const std::string& response) {
    // Your implementation goes here
    printf("QueryCallback_Success\n");
  }

  void QueryCallback_Failure(const  ::thrift_codegen::RObject& qcallback, const int32_t error_code, const std::string& error_message) {
    // Your implementation goes here
    printf("QueryCallback_Failure\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  ::std::shared_ptr<ServerHandler> handler(new ServerHandler());
  ::std::shared_ptr<TProcessor> processor(new ServerProcessor(handler));
  ::std::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  ::std::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  ::std::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

