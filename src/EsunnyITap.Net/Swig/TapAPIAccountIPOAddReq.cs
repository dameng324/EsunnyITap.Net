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

public class TapAPIAccountIPOAddReq : global::System.IDisposable {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal TapAPIAccountIPOAddReq(global::System.IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(TapAPIAccountIPOAddReq obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  internal static global::System.Runtime.InteropServices.HandleRef swigRelease(TapAPIAccountIPOAddReq obj) {
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

  ~TapAPIAccountIPOAddReq() {
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
          EsunnyITapApiPINVOKE.delete_TapAPIAccountIPOAddReq(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
    }
  }

  public string AccountNo {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOAddReq_AccountNo_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOAddReq_AccountNo_get(swigCPtr);
      return ret;
    } 
  }

  public string ExchangeNo {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOAddReq_ExchangeNo_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOAddReq_ExchangeNo_get(swigCPtr);
      return ret;
    } 
  }

  public char CommodityType {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOAddReq_CommodityType_set(swigCPtr, value);
    } 
    get {
      char ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOAddReq_CommodityType_get(swigCPtr);
      return ret;
    } 
  }

  public string CommodityNo {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOAddReq_CommodityNo_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOAddReq_CommodityNo_get(swigCPtr);
      return ret;
    } 
  }

  public char ApplyType {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOAddReq_ApplyType_set(swigCPtr, value);
    } 
    get {
      char ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOAddReq_ApplyType_get(swigCPtr);
      return ret;
    } 
  }

  public uint ApplyQty {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOAddReq_ApplyQty_set(swigCPtr, value);
    } 
    get {
      uint ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOAddReq_ApplyQty_get(swigCPtr);
      return ret;
    } 
  }

  public double LoanRatio {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOAddReq_LoanRatio_set(swigCPtr, value);
    } 
    get {
      double ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOAddReq_LoanRatio_get(swigCPtr);
      return ret;
    } 
  }

  public TapAPIAccountIPOAddReq() : this(EsunnyITapApiPINVOKE.new_TapAPIAccountIPOAddReq__SWIG_0(), true) {
  }

  public TapAPIAccountIPOAddReq(TapAPIAccountIPOAddReq other) : this(EsunnyITapApiPINVOKE.new_TapAPIAccountIPOAddReq__SWIG_1(TapAPIAccountIPOAddReq.getCPtr(other)), true) {
    if (EsunnyITapApiPINVOKE.SWIGPendingException.Pending) throw EsunnyITapApiPINVOKE.SWIGPendingException.Retrieve();
  }

}

}
