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

public class TapAPIHisDeliveryQryReq : global::System.IDisposable {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal TapAPIHisDeliveryQryReq(global::System.IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(TapAPIHisDeliveryQryReq obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  internal static global::System.Runtime.InteropServices.HandleRef swigRelease(TapAPIHisDeliveryQryReq obj) {
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

  ~TapAPIHisDeliveryQryReq() {
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
          EsunnyITapApiPINVOKE.delete_TapAPIHisDeliveryQryReq(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
    }
  }

  public string AccountNo {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisDeliveryQryReq_AccountNo_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIHisDeliveryQryReq_AccountNo_get(swigCPtr);
      return ret;
    } 
  }

  public string BeginDate {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisDeliveryQryReq_BeginDate_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIHisDeliveryQryReq_BeginDate_get(swigCPtr);
      return ret;
    } 
  }

  public string EndDate {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisDeliveryQryReq_EndDate_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIHisDeliveryQryReq_EndDate_get(swigCPtr);
      return ret;
    } 
  }

  public char SettleFlag {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisDeliveryQryReq_SettleFlag_set(swigCPtr, value);
    } 
    get {
      char ret = EsunnyITapApiPINVOKE.TapAPIHisDeliveryQryReq_SettleFlag_get(swigCPtr);
      return ret;
    } 
  }

  public TapAPIHisDeliveryQryReq() : this(EsunnyITapApiPINVOKE.new_TapAPIHisDeliveryQryReq__SWIG_0(), true) {
  }

  public TapAPIHisDeliveryQryReq(TapAPIHisDeliveryQryReq other) : this(EsunnyITapApiPINVOKE.new_TapAPIHisDeliveryQryReq__SWIG_1(TapAPIHisDeliveryQryReq.getCPtr(other)), true) {
    if (EsunnyITapApiPINVOKE.SWIGPendingException.Pending) throw EsunnyITapApiPINVOKE.SWIGPendingException.Retrieve();
  }

}

}
