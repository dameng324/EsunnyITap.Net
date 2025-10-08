#!/usr/bin/bash

set -e
# 获取脚本所在目录的绝对路径
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"

# 获取当前工作目录
CURRENT_DIR="$(pwd)"

# 比较路径，如果不同则退出
if [ "$SCRIPT_DIR" != "$CURRENT_DIR" ]; then
    echo "Error: This script must be run from its own directory ($SCRIPT_DIR)."
    exit 1
fi

bash convert-header-to-utf8.sh ./include && \
mkdir -p ../EsunnyITap.Net/Swig && swig -c++ -csharp -namespace EsunnyITap.Net -outdir ../EsunnyITap.Net/Swig/ swig.i && \
sed -E 's/.*EsunnyITapApiPINVOKE\.ITapTradeAPINotify_On.*\(.*\);//g' -i ../EsunnyITap.Net/Swig/ITapTradeAPINotify.cs && \
sed -E 's/if \(SwigDerivedClassHasMethod\(\".*\"\, swigMethodTypes.*\)\)//g' -i ../EsunnyITap.Net/Swig/ITapTradeAPINotify.cs && \
csharpier format ../EsunnyITap.Net/Swig && \
bash gen-error-map-cs.sh 
