# EsunnyTap.Net

[![NuGet](https://img.shields.io/nuget/v/EsunnyITap.Net.svg)](https://www.nuget.org/packages/EsunnyITap.Net)

[English](ReadMe.en.md) | [中文](ReadMe.md)

EsunnyITap.Net is a .NET library for the EsunnyITap Futures API which is popular worldwide future market trade api in China. 
This project is a wrapper of the EsunnyITap C++ API using swig.

Please read FAQ before using this library.[FAQ](#faq)

## Features

- Support EsunnyITap Trade API, for quote, use [EsunnyTap.Net](https://github.com/dameng324/EsunnyTap.Net)
- Support .Net framework 4.5 and .Net Standard 2.0 and Modern .Net6 and .Net8
- Auto copy the native dlls to the output directory
- Native AOT support
- Support Windows x64 and Linux x64 

## FAQ

### The version of the EsunnyITap API?

ITapTradeAPIVersion:Version iTapTradeAPI V9.3.7.4, Date 2022.02.14

### dll doesn't copy to the output directory?

set `RuntimeIdentifier` to `win-x64` in the project file.

### went to encoding issue?

try add the following code before using the API

```csharp
SwigStringHelper.Register();
```

## Installation

```bash
dotnet add package EsunnyITap.Net
```

## Usage

```csharp
using System.Threading.Tasks;
using EsunnyITap.Net;

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
ret = api.Login(new TapAPITradeLoginAuth
{
    ISModifyPassword = EsunnyITapApi.APIYNFLAG_NO,
    UserNo = "Q123456789",
    Password = "123456",
});
if (ret != 0)
{
    Console.WriteLine($"Login failed ret:{ret}");
    return;
}
await Task.Delay(100000);

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

    public override void OnAPIReady(int errorCode)
    {
        Console.WriteLine($"OnAPIReady errorCode:{errorCode}");
    }
}
```

## Donate

If this project help you, please feel free to donate me:

![img.png](img.png)

## License

MIT License