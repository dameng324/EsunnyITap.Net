//------------------------------------------------------------------------------
// <auto-generated />
//
// This file was automatically generated by SWIG (https://www.swig.org).
// Version 4.3.0
//
// Do not make changes to this file unless you know what you are doing - modify
// the SWIG interface file instead.
//------------------------------------------------------------------------------

namespace EsunnyITap.Net {

public class TapAPIOrderProcessQryReq : global::System.IDisposable {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal TapAPIOrderProcessQryReq(global::System.IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(TapAPIOrderProcessQryReq obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  internal static global::System.Runtime.InteropServices.HandleRef swigRelease(TapAPIOrderProcessQryReq obj) {
    if (obj != null) {
      if (!obj.swigCMemOwn)
        throw new global::System.ApplicationException("Cannot release ownership as memory is not owned");
      global::System.Runtime.InteropServices.HandleRef ptr = obj.swigCPtr;
      obj.swigCMemOwn = false;
      obj.Dispose();
      return ptr;
    } else {
      return new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
    }
  }

  ~TapAPIOrderProcessQryReq() {
    Dispose(false);
  }

  public void Dispose() {
    Dispose(true);
    global::System.GC.SuppressFinalize(this);
  }

  protected virtual void Dispose(bool disposing) {
    lock(this) {
      if (swigCPtr.Handle != global::System.IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          EsunnyITapApiPINVOKE.delete_TapAPIOrderProcessQryReq(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
    }
  }

  public char ServerFlag {
    set {
      EsunnyITapApiPINVOKE.TapAPIOrderProcessQryReq_ServerFlag_set(swigCPtr, value);
    } 
    get {
      char ret = EsunnyITapApiPINVOKE.TapAPIOrderProcessQryReq_ServerFlag_get(swigCPtr);
      return ret;
    } 
  }

  public string OrderNo {
    set {
      EsunnyITapApiPINVOKE.TapAPIOrderProcessQryReq_OrderNo_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIOrderProcessQryReq_OrderNo_get(swigCPtr);
      return ret;
    } 
  }

  public TapAPIOrderProcessQryReq() : this(EsunnyITapApiPINVOKE.new_TapAPIOrderProcessQryReq__SWIG_0(), true) {
  }

  public TapAPIOrderProcessQryReq(TapAPIOrderProcessQryReq other) : this(EsunnyITapApiPINVOKE.new_TapAPIOrderProcessQryReq__SWIG_1(TapAPIOrderProcessQryReq.getCPtr(other)), true) {
    if (EsunnyITapApiPINVOKE.SWIGPendingException.Pending) throw EsunnyITapApiPINVOKE.SWIGPendingException.Retrieve();
  }

}

}
