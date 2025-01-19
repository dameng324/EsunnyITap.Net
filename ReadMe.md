# EsunnyTap.Net

[![NuGet](https://img.shields.io/nuget/v/EsunnyTap.Net.svg)](https://www.nuget.org/packages/EsunnyTap.Net)

EsunnyTap.Net is a .NET library for the EsunnyTap Futures API. It is a wrapper of the EsunnyTap C++ API using swig.

Please read FAQ before using this library.[FAQ](#faq)

It only works on Windows now, It's possible to work on Linux, but I haven't finished it yet.

## Features

- Support both EsunnyTap Trade and EsunnyTap Market API
- Support .Net framework 4.5 and .Net Standard 2.0 and Modern .Net6 and .Net8
- Auto copy the native dlls to the output directory
- Native AOT support
- Solved the GB2312 encoding problem


## Installation

```bash
dotnet add package EsunnyTap.Net
```

## Usage

```csharp
using System;
using System.Threading.Tasks;
using EsunnyTap.Net;

Console.WriteLine($"TapQuoteApiVersion:{EsunnyTapApi.GetTapQuoteAPIVersion()}");
Console.WriteLine($"TapTradeApiVersion:{EsunnyTapApi.GetTapTradeAPIVersion()}");

int ret = 0;
var api = EsunnyTapApi.CreateTapTradeAPI(
    new TapAPIApplicationInfo() { AuthCode = "", KeyOperationLogPath = "" },
    ref ret
);
if (ret != 0)
{
    Console.WriteLine($"CreateTapTradeAPI failed ret:{ret}");
    return;
}

var tradeSpi = new TradeImpl();
ret = api.SetAPINotify(tradeSpi);
if (ret != 0)
{
    Console.WriteLine($"SetAPINotify failed ret:{ret}");
    return;
}
ret = api.SetHostAddress("123.161.206.213", 6160);
if (ret != 0)
{
    Console.WriteLine($"SetHostAddress failed ret:{ret}");
    return;
}
ret = api.Login(
    new TapAPITradeLoginAuth()
    {
        UserNo = "Q123456789",
        Password = "123456",
        AuthCode = "Demo_TestCollect",
        AppID = "Demo_TestCollect",
        ISDDA = EsunnyTapApi.APIYNFLAG_NO,
        ISModifyPassword = EsunnyTapApi.APIYNFLAG_NO,
        NoticeIgnoreFlag =
            EsunnyTapApi.TAPI_NOTICE_IGNORE_CLOSE | EsunnyTapApi.TAPI_NOTICE_IGNORE_POSITIONPROFIT,
    }
);
if (ret != 0)
{
    Console.WriteLine($"Login failed ret:{ret}");
    return;
}
await Task.Delay(100000);
public class TradeImpl : EsunnyTap.Net.ITapTradeAPINotify
{
    public override void OnConnect()
    {
        Console.WriteLine("OnConnect");
    }

    public override void OnRspLogin(int errorCode, TapAPITradeLoginRspInfo loginRspInfo)
    {
        Console.WriteLine($"OnRspLogin errorCode:{errorCode} loginRspInfo:{loginRspInfo}");
    }

    public override void OnDisconnect(int reasonCode)
    {
        Console.WriteLine($"OnDisconnect reasonCode:{reasonCode}");
    }

    public override void OnAPIReady()
    {
        Console.WriteLine("OnAPIReady");
    }
}

```

## Build from source

### Prerequisites

- dotnet sdk 8.0 or later
- swig 4.3.0 or later, use `scoop install swig` to install swig on windows, do not use `winget`.
- cmake 3.31.3 or later.

### Build

1. Clone the repository and open the solution file `EsunnyTap.sln` with Visual Studio 2022.
2. run the command in `EsunnyTapApi/SwigGenerator.sh` to generate the cpp and C# wrapper code.
3. run `win-build.sh` for windows native build or `linux-build.sh` for linux native build.
4. Build the `EsunnyTap.Net` C# project.

## FAQ

### How to use GB2312 encoding?

Add the following code before using the API

```csharp
SwigStringHelper.Register();
```

### The version of the EsunnyTap API?

TapQuoteApiVersion:Version TapQuoteAPI V9.3.1.4, Date 2018.12.25
TapTradeApiVersion:Version TapTradeAPI V9.0.3.16, Date 2020.08.08

### dll doesn't copy to the output directory?

set `RuntimeIdentifier` to `win-x64` in the project file.

## License

MIT License