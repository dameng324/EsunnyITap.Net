# EsunnyITap.Net

[![NuGet](https://img.shields.io/nuget/v/EsunnyITap.Net.svg)](https://www.nuget.org/packages/EsunnyITap.Net)
[![CI](https://github.com/dameng324/EsunnyITap.Net/actions/workflows/ci.yml/badge.svg)](https://github.com/dameng324/EsunnyITap.Net/actions/workflows/ci.yml)
[![License: MIT](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)

易盛 iTap 外盘交易 API 的 .NET 封装。行情接口请使用 [EsunnyTap.Net](https://github.com/dameng324/EsunnyTap.Net)。项目通过 SWIG 生成 C# 绑定，并随 NuGet 包提供对应平台的原生库。

## 支持范围

| 项目 | 支持范围 |
|---|---|
| .NET 目标框架 | .NET 8、.NET 10、.NET Framework 4.5、.NET Standard 2.0 |
| 原生运行时 | Windows x64（win-x64）、Linux x64（linux-x64） |
| API | 外盘交易 |

.NET 8 和 .NET 10 目标设置了 IsAotCompatible=true。发布应用时，RID 仍须与上表中的原生运行时匹配。

## 安装

~~~bash
dotnet add package EsunnyITap.Net
~~~

## 快速开始

授权码应使用易盛提供给你的值。以下示例不包含真实认证信息。

~~~csharp
using System;
using EsunnyITap.Net;

SwigStringHelper.Register();

var appInfo = new TapAPIApplicationInfo
{
    AuthCode = "<vendor-issued-auth-code>",
    KeyOperationLogPath = "./",
};

var result = 0;
var api = EsunnyITapApi.CreateITapTradeAPI(appInfo, ref result);
if (result != 0)
{
    throw new InvalidOperationException(
        "CreateITapTradeAPI failed: " + ErrorCodeMap.GetErrorMsg(result)
    );
}

// 注册 ITapTradeAPINotify 实现、设置前置地址，再按柜台要求登录。
~~~

若回调字符串出现中文乱码，可在调用接口前执行 SwigStringHelper.Register()。

## API 版本

仓库中包含的 iTapTradeAPI 版本为 V9.3.9.10，2025-03-20。

## 原生依赖

NuGet 包包含以下平台目录中的原生库：

- Windows x64：runtimes/win-x64/native
- Linux x64：runtimes/linux-x64/native

发布应用时，将 RuntimeIdentifier 设置为 win-x64 或 linux-x64，以选择目标平台对应的原生依赖。

## 构建

### 环境与本地构建

- 使用 global.json 指定的 .NET SDK，并在仓库根目录执行 dotnet tool restore。
- 使用 .swig-version 指定的 SWIG 版本。
- 原生构建需要 CMake 和对应平台的 C++ 工具链。Windows 使用 Git Bash 和 Visual Studio C++ 工具；Linux 构建可在 Linux 或 WSL2 中运行。
- Linux SWIG 生成需要 gawk 和 uchardet。

SWIG 生成的 C# 和 C++ 文件不提交到 Git。每次本地构建前，进入 SWIG 项目重新生成：

~~~bash
cd src/EsunnyITapApi
bash ./SwigGenerate.sh
~~~

在 Git Bash 中构建 Windows 原生库：

~~~bash
bash ./win-build.sh
~~~

在 Linux 或 WSL2 中构建 Linux 原生库：

~~~bash
bash ./linux-build.sh
~~~

回到仓库根目录构建解决方案并检查格式：

~~~bash
cd ../..
dotnet build EsunnyITap.Net.slnx --configuration Release
dotnet tool run csharpier check .
~~~

### GitHub Actions

向 main 提交 PR 或推送提交时，ci.yml 调用共享的 build.yml：Ubuntu job 生成 SWIG 绑定并构建 Linux 原生库，Windows job 构建 Windows 原生库、构建解决方案并打包 NuGet。CI 不会发布到 NuGet；生成的 nupkg 会作为保留 30 天的 workflow artifact。

publish.yml 复用同一构建流程。推送 v 前缀版本 tag 会发布 NuGet 包并创建 GitHub Release；也可以在 main 上手动运行该 workflow，并填写不带 v 前缀的版本号。

## 许可证

[MIT License](LICENSE)

问题与建议请提交到 [GitHub Issues](https://github.com/dameng324/EsunnyITap.Net/issues)。
