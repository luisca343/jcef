
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

namespace cpp thrift_codegen
namespace java thrift_codegen

service Server {
   i32 connect(),
   i32 createBrowser(),
   string closeBrowser(1:i32 bid),

   oneway void invoke(1:i32 bid, 2:string method, 3:binary buffer)
   oneway void log(1:string msg),
}
