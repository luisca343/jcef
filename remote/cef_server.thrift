
/**
 *  bool        Boolean, one byte
 *  i8 (byte)   Signed 8-bit integer
 *  i16         Signed 16-bit integer
 *  i32         Signed 32-bit integer
 *  i64         Signed 64-bit integer
 *  double      64-bit floating point value
 *  string      String
 *  binary      Blob (byte array)
 *  map<t1,t2>  Map from one type to another
 *  list<t1>    Ordered list of one type
 *  set<t1>     Set of unique elements of one type
 */

include "shared.thrift"

namespace cpp thrift_codegen
namespace java thrift_codegen

service Server {
   i32 connect(1:i32 backwardConnectionPort, 2:list<string> cmdLineArgs, 3:map<string,string> settings)
   oneway void log(1:string msg)

   //
   // CefBrowser
   //
   i32 createBrowser(1:i32 cid)
   string closeBrowser(1:i32 bid)
   oneway void invoke(1:i32 bid, 2:string method, 3:binary buffer)

   //
   // CefRequest
   //
   void Request_Update(1:shared.RObject request)
   shared.PostData Request_GetPostData(1:shared.RObject request)
   void Request_SetPostData(1:shared.RObject request, 2:shared.PostData postData)
   string Request_GetHeaderByName(1:shared.RObject request, 2:string name)
   void Request_SetHeaderByName(1:shared.RObject request, 2:string name, 3:string value, 4:bool overwrite)
   map<string, string> Request_GetHeaderMap(1:shared.RObject request) // TODO: support multimaps
   void Request_SetHeaderMap(1:shared.RObject request, 2:map<string, string> headerMap)
   void Request_Set(1:shared.RObject request, 2:string url, 3:string method, 4:shared.PostData postData, 5:map<string, string> headerMap)

   //
   // CefResponse
   //
   void Response_Update(1:shared.RObject response)
   string Response_GetHeaderByName(1:shared.RObject response, 2:string name)
   void Response_SetHeaderByName(1:shared.RObject response, 2:string name, 3:string value, 4:bool overwrite)
   map<string, string> Response_GetHeaderMap(1:shared.RObject response) // TODO: support multimaps
   void Response_SetHeaderMap(1:shared.RObject response, 2:map<string, string> headerMap)

   //
   // Callback
   //
   oneway void Callback_Dispose(1:shared.RObject callback)
   oneway void Callback_Continue(1:shared.RObject callback)
   oneway void Callback_Cancel(1:shared.RObject callback)

   //
   // CefAuthCallback
   //
   oneway void AuthCallback_Dispose(1:shared.RObject authCallback)
   oneway void AuthCallback_Continue(1:shared.RObject authCallback, 2:string username, 3:string password)
   oneway void AuthCallback_Cancel(1:shared.RObject authCallback)

   //
   // CefMessageRouter
   //
   shared.RObject CreateMessageRouter(1:string query, 2:string cancel)
   oneway void MessageRouter_Dispose(1:shared.RObject msgRouter)
   void MessageRouter_AddMessageRouterToBrowser(1:shared.RObject msgRouter, 2:i32 bid)
   void MessageRouter_RemoveMessageRouterFromBrowser(1:shared.RObject msgRouter, 2:i32 bid)
   void MessageRouter_AddHandler(1:shared.RObject msgRouter, 2:shared.RObject handler)
   void MessageRouter_RemoveHandler(1:shared.RObject msgRouter, 2:shared.RObject handler)
   void MessageRouter_CancelPending(1:shared.RObject msgRouter, 2:i32 bid, 3:shared.RObject handler)

   oneway void QueryCallback_Dispose(1:shared.RObject qcallback)
   oneway void QueryCallback_Success(1:shared.RObject qcallback, 2:string response)
   oneway void QueryCallback_Failure(1:shared.RObject qcallback, 2:i32 error_code, 3:string error_message)
}
