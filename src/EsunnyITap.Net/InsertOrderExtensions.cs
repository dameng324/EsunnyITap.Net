using System;
using System.Runtime.InteropServices;
using System.Text;

namespace EsunnyITap.Net;

public static class InsertOrderExtensions
{
    public static unsafe int InsertOrder2(this ITapTradeAPI api, ref uint sessionID, TapAPINewOrder order)
    {
        return api.InsertOrder(ref sessionID, new SWIGTYPE_p_a_51__char(IntPtr.Zero, futureUse: false), order);
    }

    public static int InsertHKMarketOrder2(this ITapTradeAPI api, ref uint sessionID, TapAPIOrderMarketInsertReq order)
    {
        return api.InsertHKMarketOrder(
            ref sessionID,
            new SWIGTYPE_p_a_51__char(IntPtr.Zero, futureUse: false),
            new SWIGTYPE_p_a_51__char(IntPtr.Zero, futureUse: false),
            order
        );
    }

    public static int InsertSpecialOrder2(this ITapTradeAPI api, ref uint sessionID, TapAPISpecialOrderInsertReq order)
    {
        return api.InsertSpecialOrder(ref sessionID, new SWIGTYPE_p_a_51__char(IntPtr.Zero, futureUse: false), order);
    }
}
