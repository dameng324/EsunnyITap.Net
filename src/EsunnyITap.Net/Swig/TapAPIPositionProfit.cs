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

public class TapAPIPositionProfit : global::System.IDisposable {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal TapAPIPositionProfit(global::System.IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(TapAPIPositionProfit obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  internal static global::System.Runtime.InteropServices.HandleRef swigRelease(TapAPIPositionProfit obj) {
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

  ~TapAPIPositionProfit() {
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
          EsunnyITapApiPINVOKE.delete_TapAPIPositionProfit(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
    }
  }

  public string PositionNo {
    set {
      EsunnyITapApiPINVOKE.TapAPIPositionProfit_PositionNo_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIPositionProfit_PositionNo_get(swigCPtr);
      return ret;
    } 
  }

  public uint PositionStreamId {
    set {
      EsunnyITapApiPINVOKE.TapAPIPositionProfit_PositionStreamId_set(swigCPtr, value);
    } 
    get {
      uint ret = EsunnyITapApiPINVOKE.TapAPIPositionProfit_PositionStreamId_get(swigCPtr);
      return ret;
    } 
  }

  public double PositionProfit {
    set {
      EsunnyITapApiPINVOKE.TapAPIPositionProfit_PositionProfit_set(swigCPtr, value);
    } 
    get {
      double ret = EsunnyITapApiPINVOKE.TapAPIPositionProfit_PositionProfit_get(swigCPtr);
      return ret;
    } 
  }

  public double LMEPositionProfit {
    set {
      EsunnyITapApiPINVOKE.TapAPIPositionProfit_LMEPositionProfit_set(swigCPtr, value);
    } 
    get {
      double ret = EsunnyITapApiPINVOKE.TapAPIPositionProfit_LMEPositionProfit_get(swigCPtr);
      return ret;
    } 
  }

  public double OptionMarketValue {
    set {
      EsunnyITapApiPINVOKE.TapAPIPositionProfit_OptionMarketValue_set(swigCPtr, value);
    } 
    get {
      double ret = EsunnyITapApiPINVOKE.TapAPIPositionProfit_OptionMarketValue_get(swigCPtr);
      return ret;
    } 
  }

  public double CalculatePrice {
    set {
      EsunnyITapApiPINVOKE.TapAPIPositionProfit_CalculatePrice_set(swigCPtr, value);
    } 
    get {
      double ret = EsunnyITapApiPINVOKE.TapAPIPositionProfit_CalculatePrice_get(swigCPtr);
      return ret;
    } 
  }

  public TapAPIPositionProfit() : this(EsunnyITapApiPINVOKE.new_TapAPIPositionProfit__SWIG_0(), true) {
  }

  public TapAPIPositionProfit(TapAPIPositionProfit other) : this(EsunnyITapApiPINVOKE.new_TapAPIPositionProfit__SWIG_1(TapAPIPositionProfit.getCPtr(other)), true) {
    if (EsunnyITapApiPINVOKE.SWIGPendingException.Pending) throw EsunnyITapApiPINVOKE.SWIGPendingException.Retrieve();
  }

}

}
