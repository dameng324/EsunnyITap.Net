using System.Text;

namespace EsunnyITap.Net;

public static class InsertOrderExtensions
{
    [global::System.Runtime.InteropServices.DllImport("EsunnyITapApi", EntryPoint = "CSharp_EsunnyITapfNet_ITapTradeAPI_InsertOrder___")]
    public static extern int ITapTradeAPI_InsertOrder(
        global::System.Runtime.InteropServices.HandleRef jarg1,
        ref uint jarg2,
        ref StringBuilder jarg3,
        global::System.Runtime.InteropServices.HandleRef jarg4
    );

    public static int InsertOrder2(this ITapTradeAPI api, ref uint sessionID, ref StringBuilder ClientOrderNo, TapAPINewOrder order)
    {
        int ret = ITapTradeAPI_InsertOrder(ITapTradeAPI.getCPtr(api), ref sessionID, ref ClientOrderNo, TapAPINewOrder.getCPtr(order));
        return ret;
    }

    [global::System.Runtime.InteropServices.DllImport(
        "EsunnyITapApi",
        EntryPoint = "CSharp_EsunnyITapfNet_ITapTradeAPI_InsertHKMarketOrder___"
    )]
    public static extern int ITapTradeAPI_InsertHKMarketOrder(
        global::System.Runtime.InteropServices.HandleRef jarg1,
        ref uint jarg2,
        ref StringBuilder jarg3,
        global::System.Runtime.InteropServices.HandleRef jarg4,
        global::System.Runtime.InteropServices.HandleRef jarg5
    );

    public static int InsertHKMarketOrder(
        this ITapTradeAPI api,
        ref uint sessionID,
        ref StringBuilder ClientBuyOrderNo,
        SWIGTYPE_p_a_51__char ClientSellOrderNo,
        TapAPIOrderMarketInsertReq order
    )
    {
        return ITapTradeAPI_InsertHKMarketOrder(
            ITapTradeAPI.getCPtr(api),
            ref sessionID,
            ref ClientBuyOrderNo,
            SWIGTYPE_p_a_51__char.getCPtr(ClientSellOrderNo),
            TapAPIOrderMarketInsertReq.getCPtr(order)
        );
    }

    [global::System.Runtime.InteropServices.DllImport(
        "EsunnyITapApi",
        EntryPoint = "CSharp_EsunnyITapfNet_ITapTradeAPI_InsertSpecialOrder___"
    )]
    public static extern int ITapTradeAPI_InsertSpecialOrder(
        global::System.Runtime.InteropServices.HandleRef jarg1,
        ref uint jarg2,
        ref StringBuilder jarg3,
        global::System.Runtime.InteropServices.HandleRef jarg4
    );

    public static int InsertSpecialOrder(
        this ITapTradeAPI api,ref uint sessionID, ref StringBuilder clientorderno, TapAPISpecialOrderInsertReq order)
    {
        int ret = ITapTradeAPI_InsertSpecialOrder(
            ITapTradeAPI.getCPtr(api),
            ref sessionID,
            ref (clientorderno),
            TapAPISpecialOrderInsertReq.getCPtr(order)
        );
        return ret;
    }
}
