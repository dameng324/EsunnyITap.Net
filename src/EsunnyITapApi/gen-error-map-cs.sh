#!/usr/bin/env bash

input="include/iTapAPIError.h"
output="../EsunnyITap.Net/ErrorMap.cs"

cat > "$output" << 'EOF'
using System.Collections.Generic;

namespace EsunnyITap.Net;

public static class ErrorCodeMap
{
    static readonly Dictionary<int, string> s_errorMap = new Dictionary<int, string>
    {
EOF

awk '
    # 如果这一行是注释（支持 //! 或 //）
    /^\s*\/\// {
        line=$0
        sub(/^\s*\/\/!?[[:space:]]*/, "", line)  # 去掉 // 或 //! 前缀
        sub(/\r$/, "", line)                     # 去掉末尾回车
        gsub(/^[ \t]+|[ \t]+$/, "", line)        # 去掉首尾空格
        prevComment=line
        next
    }

    # 如果这一行是 const int ...
    /const[ \t]+int[ \t]+/ {
        if (match($0, /=\s*(-?[0-9]+)\s*;/, arr)) {
            code=arr[1]
            msg=(prevComment != "" ? prevComment : "未定义错误")
            gsub(/"/, "", msg)
            sub(/\r$/, "", msg)
            gsub(/\n/, "", msg)
            printf("        [%s] = \"%s\",\n", code, msg)
            prevComment=""
        }
    }
' "$input" >> "$output"

cat >> "$output" << 'EOF'
    };

    public static string GetErrorMsg(int errorCode)
    {
        return s_errorMap.TryGetValue(errorCode, out var msg) ? $"{errorCode},{msg}" : errorCode.ToString();
    }
}
EOF

echo "生成完成: $output"
