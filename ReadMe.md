# EsunnyITap.Net

[![NuGet](https://img.shields.io/nuget/v/EsunnyITap.Net.svg)](https://www.nuget.org/packages/EsunnyITap.Net)

[English](ReadMe.en.md) | [中文](ReadMe.md)

EsunnyITap.Net是一个易盛9.0外盘柜台接口的C#封装。它使用Swig技术将易盛的C++接口封装成C#接口。它支持易盛的交易接口。

## 主要功能

- 支持外盘的交易接口。行情请使用[EsunnyTap.Net](https://github.com/dameng324/EsunnyTap.Net)
- 支持.Net Framework 4.5和.Net Standard 2.0，以及.NET6和.NET8
- 编译时会自动将依赖的dll拷贝到输出目录
- 支持Native AOT编译，避免代码被反编译
- 同时支持64位Windows和Linux。Mac/IOS/Android由于易盛官方并未发布对应的native dll，所以无法支持

## 常见问题

### API版本是多少？

ITapTradeAPIVersion:iTapTradeAPI V9.3.9.10, Date 2025.03.20

### Dll文件没有自动拷贝到输出目录

默认情况下编译后会拷贝到runtimes/目录下以适应不同的操作系统。如果你的程序只在特定的操作系统下运行，可以在项目csproj配置文件中配置特定的RuntimeIdentifier。
- Windows: `<RuntimeIdentifier>win-x64</RuntimeIdentifier>`
- Linux: `<RuntimeIdentifier>linux-x64</RuntimeIdentifier>`

### 存在中文乱码问题？

在调用所有接口之前尝试使用此接口

```csharp
SwigStringHelper.Register();
```

## 安装

```bash
dotnet add package EsunnyITap.Net
```

## 用法

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

## 打赏

如果这个项目有帮助到你，请随意打赏
![img.png](img.png)


## License

MIT License