/* File : swig.i */

%module(directors="1") EsunnyITapApi
%{ 
    #include "include/iTapAPICommDef.h"
    #include "include/iTapAPIError.h"
    #include "include/iTapTradeAPIDataType.h"
    #include "include/iTapTradeAPI.h"
    using namespace ITapTrade;
%}
/* turn on director wrapping Callback */
%feature("director") ITapTradeAPINotify;

%include <typemaps.i>
%apply unsigned int *INOUT { unsigned int *sessionID };
%apply int *INOUT { int &iResult };


// %apply string *INOUT { TAPISTR_50 * clientorderno };
typedef char TAPISTR_50[51];
// 定义 typemaps
%typemap(in) (TAPISTR_50 *clientorderno) {
    $1 = (TAPISTR_50 *)malloc(51);
    strncpy((char *)$1, $input.c_str(), 50);
    ((char *)$1)[50] = '\0'; // 确保字符串以 NULL 结尾
}

%typemap(out) (TAPISTR_50 *clientorderno) {
    $result = gcnew System::String($1);
    free($1); // 释放内存
}

// 应用 typemaps
%apply TAPISTR_50 * { TAPISTR_50 *clientorderno };

%include "arrays_csharp.i"
%apply double INOUT[]  { double [20] }
%apply unsigned long long INOUT[]  { unsigned long long [20] }

%copyctor;

%include "include/iTapAPICommDef.h"
%include "include/iTapAPIError.h"
%include "include/iTapTradeAPIDataType.h"
%include "include/iTapTradeAPI.h"