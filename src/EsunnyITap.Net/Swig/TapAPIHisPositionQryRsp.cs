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

public class TapAPIHisPositionQryRsp : global::System.IDisposable {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal TapAPIHisPositionQryRsp(global::System.IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(TapAPIHisPositionQryRsp obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  internal static global::System.Runtime.InteropServices.HandleRef swigRelease(TapAPIHisPositionQryRsp obj) {
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

  ~TapAPIHisPositionQryRsp() {
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
          EsunnyITapApiPINVOKE.delete_TapAPIHisPositionQryRsp(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
    }
  }

  public string SettleDate {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_SettleDate_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_SettleDate_get(swigCPtr);
      return ret;
    } 
  }

  public string OpenDate {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_OpenDate_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_OpenDate_get(swigCPtr);
      return ret;
    } 
  }

  public string AccountNo {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_AccountNo_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_AccountNo_get(swigCPtr);
      return ret;
    } 
  }

  public string ExchangeNo {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_ExchangeNo_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_ExchangeNo_get(swigCPtr);
      return ret;
    } 
  }

  public char CommodityType {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_CommodityType_set(swigCPtr, value);
    } 
    get {
      char ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_CommodityType_get(swigCPtr);
      return ret;
    } 
  }

  public string CommodityNo {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_CommodityNo_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_CommodityNo_get(swigCPtr);
      return ret;
    } 
  }

  public string ContractNo {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_ContractNo_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_ContractNo_get(swigCPtr);
      return ret;
    } 
  }

  public string StrikePrice {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_StrikePrice_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_StrikePrice_get(swigCPtr);
      return ret;
    } 
  }

  public char CallOrPutFlag {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_CallOrPutFlag_set(swigCPtr, value);
    } 
    get {
      char ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_CallOrPutFlag_get(swigCPtr);
      return ret;
    } 
  }

  public char MatchSide {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_MatchSide_set(swigCPtr, value);
    } 
    get {
      char ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_MatchSide_get(swigCPtr);
      return ret;
    } 
  }

  public char HedgeFlag {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_HedgeFlag_set(swigCPtr, value);
    } 
    get {
      char ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_HedgeFlag_get(swigCPtr);
      return ret;
    } 
  }

  public double PositionPrice {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_PositionPrice_set(swigCPtr, value);
    } 
    get {
      double ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_PositionPrice_get(swigCPtr);
      return ret;
    } 
  }

  public uint PositionQty {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_PositionQty_set(swigCPtr, value);
    } 
    get {
      uint ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_PositionQty_get(swigCPtr);
      return ret;
    } 
  }

  public string OrderNo {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_OrderNo_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_OrderNo_get(swigCPtr);
      return ret;
    } 
  }

  public string PositionNo {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_PositionNo_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_PositionNo_get(swigCPtr);
      return ret;
    } 
  }

  public string UpperNo {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_UpperNo_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_UpperNo_get(swigCPtr);
      return ret;
    } 
  }

  public string CurrencyGroup {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_CurrencyGroup_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_CurrencyGroup_get(swigCPtr);
      return ret;
    } 
  }

  public string Currency {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_Currency_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_Currency_get(swigCPtr);
      return ret;
    } 
  }

  public double PreSettlePrice {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_PreSettlePrice_set(swigCPtr, value);
    } 
    get {
      double ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_PreSettlePrice_get(swigCPtr);
      return ret;
    } 
  }

  public double SettlePrice {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_SettlePrice_set(swigCPtr, value);
    } 
    get {
      double ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_SettlePrice_get(swigCPtr);
      return ret;
    } 
  }

  public double PositionDProfit {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_PositionDProfit_set(swigCPtr, value);
    } 
    get {
      double ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_PositionDProfit_get(swigCPtr);
      return ret;
    } 
  }

  public double LMEPositionProfit {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_LMEPositionProfit_set(swigCPtr, value);
    } 
    get {
      double ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_LMEPositionProfit_get(swigCPtr);
      return ret;
    } 
  }

  public double OptionMarketValue {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_OptionMarketValue_set(swigCPtr, value);
    } 
    get {
      double ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_OptionMarketValue_get(swigCPtr);
      return ret;
    } 
  }

  public double AccountInitialMargin {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_AccountInitialMargin_set(swigCPtr, value);
    } 
    get {
      double ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_AccountInitialMargin_get(swigCPtr);
      return ret;
    } 
  }

  public double AccountMaintenanceMargin {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_AccountMaintenanceMargin_set(swigCPtr, value);
    } 
    get {
      double ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_AccountMaintenanceMargin_get(swigCPtr);
      return ret;
    } 
  }

  public double UpperInitialMargin {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_UpperInitialMargin_set(swigCPtr, value);
    } 
    get {
      double ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_UpperInitialMargin_get(swigCPtr);
      return ret;
    } 
  }

  public double UpperMaintenanceMargin {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_UpperMaintenanceMargin_set(swigCPtr, value);
    } 
    get {
      double ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_UpperMaintenanceMargin_get(swigCPtr);
      return ret;
    } 
  }

  public string SettleGroupNo {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_SettleGroupNo_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_SettleGroupNo_get(swigCPtr);
      return ret;
    } 
  }

  public char ServerFlag {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_ServerFlag_set(swigCPtr, value);
    } 
    get {
      char ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_ServerFlag_get(swigCPtr);
      return ret;
    } 
  }

  public string SuperiorAccount {
    set {
      EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_SuperiorAccount_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIHisPositionQryRsp_SuperiorAccount_get(swigCPtr);
      return ret;
    } 
  }

  public TapAPIHisPositionQryRsp() : this(EsunnyITapApiPINVOKE.new_TapAPIHisPositionQryRsp__SWIG_0(), true) {
  }

  public TapAPIHisPositionQryRsp(TapAPIHisPositionQryRsp other) : this(EsunnyITapApiPINVOKE.new_TapAPIHisPositionQryRsp__SWIG_1(TapAPIHisPositionQryRsp.getCPtr(other)), true) {
    if (EsunnyITapApiPINVOKE.SWIGPendingException.Pending) throw EsunnyITapApiPINVOKE.SWIGPendingException.Retrieve();
  }

}

}
