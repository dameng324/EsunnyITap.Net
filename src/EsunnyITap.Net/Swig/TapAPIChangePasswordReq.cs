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

public class TapAPIChangePasswordReq : global::System.IDisposable {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal TapAPIChangePasswordReq(global::System.IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(TapAPIChangePasswordReq obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  internal static global::System.Runtime.InteropServices.HandleRef swigRelease(TapAPIChangePasswordReq obj) {
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

  ~TapAPIChangePasswordReq() {
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
          EsunnyITapApiPINVOKE.delete_TapAPIChangePasswordReq(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
    }
  }

  public string AccountNo {
    set {
      EsunnyITapApiPINVOKE.TapAPIChangePasswordReq_AccountNo_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIChangePasswordReq_AccountNo_get(swigCPtr);
      return ret;
    } 
  }

  public char PasswordType {
    set {
      EsunnyITapApiPINVOKE.TapAPIChangePasswordReq_PasswordType_set(swigCPtr, value);
    } 
    get {
      char ret = EsunnyITapApiPINVOKE.TapAPIChangePasswordReq_PasswordType_get(swigCPtr);
      return ret;
    } 
  }

  public string OldPassword {
    set {
      EsunnyITapApiPINVOKE.TapAPIChangePasswordReq_OldPassword_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIChangePasswordReq_OldPassword_get(swigCPtr);
      return ret;
    } 
  }

  public string NewPassword {
    set {
      EsunnyITapApiPINVOKE.TapAPIChangePasswordReq_NewPassword_set(swigCPtr, value);
    } 
    get {
      string ret = EsunnyITapApiPINVOKE.TapAPIChangePasswordReq_NewPassword_get(swigCPtr);
      return ret;
    } 
  }

  public TapAPIChangePasswordReq() : this(EsunnyITapApiPINVOKE.new_TapAPIChangePasswordReq__SWIG_0(), true) {
  }

  public TapAPIChangePasswordReq(TapAPIChangePasswordReq other) : this(EsunnyITapApiPINVOKE.new_TapAPIChangePasswordReq__SWIG_1(TapAPIChangePasswordReq.getCPtr(other)), true) {
    if (EsunnyITapApiPINVOKE.SWIGPendingException.Pending) throw EsunnyITapApiPINVOKE.SWIGPendingException.Retrieve();
  }

}

}
