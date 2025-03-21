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

public class TapAPIAccountIPOQryRsp : global::System.IDisposable {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal TapAPIAccountIPOQryRsp(global::System.IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(TapAPIAccountIPOQryRsp obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  internal static global::System.Runtime.InteropServices.HandleRef swigRelease(TapAPIAccountIPOQryRsp obj) {
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

  ~TapAPIAccountIPOQryRsp() {
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
          EsunnyITapApiPINVOKE.delete_TapAPIAccountIPOQryRsp(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
    }
  }

  public string EndDate {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_EndDate_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_EndDate_get(swigCPtr);
      return ret;
    } 
  }

  public string ResultDate {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_ResultDate_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_ResultDate_get(swigCPtr);
      return ret;
    } 
  }

  public string IPODate {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_IPODate_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_IPODate_get(swigCPtr);
      return ret;
    } 
  }

  public string AccountNo {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_AccountNo_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_AccountNo_get(swigCPtr);
      return ret;
    } 
  }

  public string ExchangeNo {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_ExchangeNo_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_ExchangeNo_get(swigCPtr);
      return ret;
    } 
  }

  public char CommodityType {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_CommodityType_set(swigCPtr, value);
    } 
    get {
      char ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_CommodityType_get(swigCPtr);
      return ret;
    } 
  }

  public string CommodityNo {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_CommodityNo_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_CommodityNo_get(swigCPtr);
      return ret;
    } 
  }

  public char ApplyType {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_ApplyType_set(swigCPtr, value);
    } 
    get {
      char ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_ApplyType_get(swigCPtr);
      return ret;
    } 
  }

  public uint ApplyQty {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_ApplyQty_set(swigCPtr, value);
    } 
    get {
      uint ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_ApplyQty_get(swigCPtr);
      return ret;
    } 
  }

  public double ApplyCash {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_ApplyCash_set(swigCPtr, value);
    } 
    get {
      double ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_ApplyCash_get(swigCPtr);
      return ret;
    } 
  }

  public double LoanRatio {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_LoanRatio_set(swigCPtr, value);
    } 
    get {
      double ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_LoanRatio_get(swigCPtr);
      return ret;
    } 
  }

  public double LoanInterest {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_LoanInterest_set(swigCPtr, value);
    } 
    get {
      double ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_LoanInterest_get(swigCPtr);
      return ret;
    } 
  }

  public double ApplyFee {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_ApplyFee_set(swigCPtr, value);
    } 
    get {
      double ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_ApplyFee_get(swigCPtr);
      return ret;
    } 
  }

  public char ApplyStatus {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_ApplyStatus_set(swigCPtr, value);
    } 
    get {
      char ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_ApplyStatus_get(swigCPtr);
      return ret;
    } 
  }

  public uint ResultQty {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_ResultQty_set(swigCPtr, value);
    } 
    get {
      uint ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_ResultQty_get(swigCPtr);
      return ret;
    } 
  }

  public string OperatorNo {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_OperatorNo_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_OperatorNo_get(swigCPtr);
      return ret;
    } 
  }

  public string OperateTime {
    set {
      EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_OperateTime_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIAccountIPOQryRsp_OperateTime_get(swigCPtr);
      return ret;
    } 
  }

  public TapAPIAccountIPOQryRsp() : this(EsunnyITapApiPINVOKE.new_TapAPIAccountIPOQryRsp__SWIG_0(), true) {
  }

  public TapAPIAccountIPOQryRsp(TapAPIAccountIPOQryRsp other) : this(EsunnyITapApiPINVOKE.new_TapAPIAccountIPOQryRsp__SWIG_1(TapAPIAccountIPOQryRsp.getCPtr(other)), true) {
    if (EsunnyITapApiPINVOKE.SWIGPendingException.Pending) throw EsunnyITapApiPINVOKE.SWIGPendingException.Retrieve();
  }

}

}
