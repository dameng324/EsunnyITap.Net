// See https://aka.ms/new-console-template for more information
using System;
using System.Reactive.Linq;
using System.Reactive.Subjects;
using System.Reactive.Threading.Tasks;
using System.Threading.Tasks;
using EsunnyITap.Net;

try
{
    Console.WriteLine($"ITapTradeAPIVersion:{EsunnyITapApi.GetITapTradeAPIVersion()}");

    int ret = 0;
    var api = EsunnyITapApi.CreateITapTradeAPI(
        new TapAPIApplicationInfo()
        {
            AuthCode =
                "67EA896065459BECDFDB924B29CB7DF1946CED32E26C1EAC946CED32E26C1EAC946CED32E26C1EAC946CED32E26C1EAC5211AF9FEE541DDE41BCBAB68D525B0D111A0884D847D57163FF7F329FA574E7946CED32E26C1EAC946CED32E26C1EAC733827B0CE853869ABD9B8F170E14F8847D3EA0BF4E191F5D97B3DFE4CCB1F01842DD2B3EA2F4B20CAD19B8347719B7E20EA1FA7A3D1BFEFF22290F4B5C43E6C520ED5A40EC1D50ACDF342F46A92CCF87AEE6D73542C42EC17818349C7DEDAB0E4DB16977714F873D505029E27B3D57EB92D5BEDA0A710197EB67F94BB1892B30F58A3F211D9C3B3839BE2D73FD08DD776B9188654853DDA57675EBB7D6FBBFC",
            KeyOperationLogPath = "./",
        },
        ref ret
    );
    if (ret != 0)
    {
        Console.WriteLine($"CreateTapTradeAPI failed ret:{ret} {ErrorCodeMap.GetErrorMsg(ret)}");
        return;
    }

    var tradeSpi = new TradeImpl();
    ret = api.SetAPINotify(tradeSpi);
    if (ret != 0)
    {
        Console.WriteLine($"SetAPINotify failed ret:{ret}");
        return;
    }
    ret = api.SetHostAddress("123.161.206.213", 8383);
    if (ret != 0)
    {
        Console.WriteLine($"SetHostAddress failed ret:{ret}");
        return;
    }

    var login = new TapAPITradeLoginAuth
    {
        ISModifyPassword = EsunnyITapApi.APIYNFLAG_NO,
        UserNo = "Q123456789",
        Password = "123456",
    };
    ret = api.Login(login);
    if (ret != 0)
    {
        Console.WriteLine($"Login failed ret:{ret}");
        return;
    }

    ret = await tradeSpi.OnAPIReadySubject.Take(1).ToTask();
    if (ret != 0)
    {
        Console.WriteLine($"OnAPIReady failed ret:{ret}");
        return;
    }

    uint sessionID = 0;

    ret = api.InsertOrder2(
        ref sessionID,
        new TapAPINewOrder()
        {
            AccountNo = login.UserNo,
            CommodityNo = "HSI",
            ContractNo = "2503",
            ContractNo2 = string.Empty,
            ExchangeNo = "HKEX",
            ExpireTime = "",
            InquiryNo = "",
            RefString = "123",
            StrikePrice = "",
            StrikePrice2 = "",
            AddOneIsValid = EsunnyITapApi.APIYNFLAG_NO,
            CallOrPutFlag2 = EsunnyITapApi.TAPI_CALLPUT_FLAG_NONE,
            HedgeFlag = EsunnyITapApi.TAPI_HEDGEFLAG_T,
            IsRiskOrder = EsunnyITapApi.APIYNFLAG_NO,
            MaxClipSize = 0,
            MinClipSize = 0,
            OrderMinQty = 0,
            OrderPrice = 3333,
            OrderPrice2 = 0,
            OrderQty = 1,
            OrderSide = EsunnyITapApi.TAPI_SIDE_BUY,
            OrderSource = EsunnyITapApi.TAPI_ORDER_SOURCE_PROGRAM,
            OrderType = EsunnyITapApi.TAPI_ORDER_TYPE_LIMIT,
            PositionEffect = EsunnyITapApi.TAPI_PositionEffect_OPEN,
            PositionEffect2 = EsunnyITapApi.TAPI_PositionEffect_NONE,
            RefInt = 0,
            StopPrice = 0,
            TacticsType = EsunnyITapApi.TAPI_TACTICS_TYPE_NONE,
            TimeInForce = EsunnyITapApi.TAPI_ORDER_TIMEINFORCE_GFD,
            TriggerCondition = EsunnyITapApi.TAPI_TRIGGER_CONDITION_NONE,
            TriggerPriceType = EsunnyITapApi.TAPI_TRIGGER_PRICE_NONE,
            CallOrPutFlag = EsunnyITapApi.TAPI_CALLPUT_FLAG_NONE,
            CommodityType = EsunnyITapApi.TAPI_COMMODITY_TYPE_FUTURES,
            RefDouble = 0,
        }
    );
    if (ret != 0)
    {
        Console.WriteLine($"InsertOrder failed ret:{ret}");
        return;
    }

    await Task.Delay(100000);
}
catch (Exception ex)
{
    Console.WriteLine($"Exception:{ex}");
}
finally
{
    Console.WriteLine("Press any key to exit");
    Console.ReadKey();
}

public class TradeImpl : EsunnyITap.Net.ITapTradeAPINotify
{
    public override void OnConnect(string HostAddress)
    {
        Console.WriteLine($"OnConnect HostAddress:{HostAddress}");
    }

    public override void OnRspLogin(int errorCode, TapAPITradeLoginRspInfo loginRspInfo)
    {
        Console.WriteLine($"OnRspLogin errorCode:{errorCode} loginRspInfo:{loginRspInfo}");
    }

    public override void OnDisconnect(int reasonCode)
    {
        Console.WriteLine($"OnDisconnect reasonCode:{reasonCode}");
    }

    public Subject<int> OnAPIReadySubject = new();

    public override void OnAPIReady(int errorCode)
    {
        Console.WriteLine($"OnAPIReady errorCode:{errorCode}");
        OnAPIReadySubject.OnNext(errorCode);
    }

    public override void OnRspOrderAction(uint sessionID, int errorCode, TapAPIOrderActionRsp info)
    {
    }

    public override void OnRspOrderLocalInput(uint sessionID, int errorCode, TapAPIOrderInfo info)
    {
        
    }

    public override void OnRtnOrder(TapAPIOrderInfoNotice info)
    {
    }
}
