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

public class TapAPIOrderCancelReq : global::System.IDisposable {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal TapAPIOrderCancelReq(global::System.IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(TapAPIOrderCancelReq obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  internal static global::System.Runtime.InteropServices.HandleRef swigRelease(TapAPIOrderCancelReq obj) {
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

  ~TapAPIOrderCancelReq() {
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
          EsunnyITapApiPINVOKE.delete_TapAPIOrderCancelReq(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
    }
  }

  public int RefInt {
    set {
      EsunnyITapApiPINVOKE.TapAPIOrderCancelReq_RefInt_set(swigCPtr, value);
    } 
    get {
      int ret = EsunnyITapApiPINVOKE.TapAPIOrderCancelReq_RefInt_get(swigCPtr);
      return ret;
    } 
  }

  public double RefDouble {
    set {
      EsunnyITapApiPINVOKE.TapAPIOrderCancelReq_RefDouble_set(swigCPtr, value);
    } 
    get {
      double ret = EsunnyITapApiPINVOKE.TapAPIOrderCancelReq_RefDouble_get(swigCPtr);
      return ret;
    } 
  }

  public string RefString {
    set {
      EsunnyITapApiPINVOKE.TapAPIOrderCancelReq_RefString_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIOrderCancelReq_RefString_get(swigCPtr);
      return ret;
    } 
  }

  public char ServerFlag {
    set {
      EsunnyITapApiPINVOKE.TapAPIOrderCancelReq_ServerFlag_set(swigCPtr, value);
    } 
    get {
      char ret = EsunnyITapApiPINVOKE.TapAPIOrderCancelReq_ServerFlag_get(swigCPtr);
      return ret;
    } 
  }

  public string OrderNo {
    set {
      EsunnyITapApiPINVOKE.TapAPIOrderCancelReq_OrderNo_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIOrderCancelReq_OrderNo_get(swigCPtr);
      return ret;
    } 
  }

  public TapAPIOrderCancelReq() : this(EsunnyITapApiPINVOKE.new_TapAPIOrderCancelReq__SWIG_0(), true) {
  }

  public TapAPIOrderCancelReq(TapAPIOrderCancelReq other) : this(EsunnyITapApiPINVOKE.new_TapAPIOrderCancelReq__SWIG_1(TapAPIOrderCancelReq.getCPtr(other)), true) {
    if (EsunnyITapApiPINVOKE.SWIGPendingException.Pending) throw EsunnyITapApiPINVOKE.SWIGPendingException.Retrieve();
  }

}

}
