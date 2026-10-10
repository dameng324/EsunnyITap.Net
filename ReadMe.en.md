# EsunnyITap.Net

[![NuGet](https://img.shields.io/nuget/v/EsunnyITap.Net.svg)](https://www.nuget.org/packages/EsunnyITap.Net)
[![CI](https://github.com/dameng324/EsunnyITap.Net/actions/workflows/ci.yml/badge.svg)](https://github.com/dameng324/EsunnyITap.Net/actions/workflows/ci.yml)
[![License: MIT](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)

[English](ReadMe.en.md) | [中文](ReadMe.md)

A .NET wrapper for the Esunny iTap foreign futures trading API. For market data, use [EsunnyTap.Net](https://github.com/dameng324/EsunnyTap.Net). SWIG generates the C# bindings, and the NuGet package includes native libraries for the supported runtimes.

## Supported targets

| Item | Support |
|---|---|
| .NET targets | .NET 8, .NET 10, .NET Framework 4.5, .NET Standard 2.0 |
| Native runtimes | Windows x64 (win-x64), Linux x64 (linux-x64) |
| API | Foreign futures trading |

The .NET 8 and .NET 10 targets declare IsAotCompatible=true. Applications still need a native library for their target RID.

## Install

~~~bash
dotnet add package EsunnyITap.Net
~~~

## Quick start

Use the authorization code issued by Esunny. This example contains placeholders only.

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

// Register an ITapTradeAPINotify implementation, set the front address, then log in.
~~~

Call SwigStringHelper.Register() before using the API if callback strings need Chinese text conversion.

## API version

The included iTapTradeAPI version is V9.3.9.10, dated 2025-03-20.

## Native libraries

The NuGet package contains native libraries under:

- Windows x64: runtimes/win-x64/native
- Linux x64: runtimes/linux-x64/native

Set the application RuntimeIdentifier to win-x64 or linux-x64 when publishing for a specific platform.

## Build

### Requirements and local build

- Use the .NET SDK pinned by global.json and run dotnet tool restore from the repository root.
- Use the SWIG version recorded in .swig-version.
- Linux SWIG generation requires gawk and uchardet. Native builds require CMake and the matching C++ toolchain. Use Git Bash and Visual Studio C++ tools for Windows; Linux builds can run on Linux or WSL2.

Generated C# and C++ SWIG files are not tracked in Git. Regenerate them before a local build:

~~~bash
cd src/EsunnyITapApi
bash ./SwigGenerate.sh
~~~

Build the Windows native library from Git Bash; build the Linux library on Linux or WSL2:

~~~bash
bash ./win-build.sh
bash ./linux-build.sh
~~~

Return to the repository root to build the solution and check formatting:

~~~bash
cd ../..
dotnet build EsunnyITap.Net.slnx --configuration Release
dotnet tool run csharpier check .
~~~

### GitHub Actions

Pull requests and pushes to main run ci.yml, which calls the shared build.yml. The Ubuntu job generates SWIG bindings and the Linux native library; the Windows job builds the Windows native library and NuGet package. CI uploads the nupkg as a workflow artifact for 30 days and does not publish it to NuGet.

publish.yml uses the same build workflow. A v-prefixed version tag publishes the package and creates a GitHub Release. You can also run the workflow manually from main and enter the version without the v prefix.

## License

[MIT License](LICENSE)

For questions and bug reports, open a [GitHub issue](https://github.com/dameng324/EsunnyITap.Net/issues).
