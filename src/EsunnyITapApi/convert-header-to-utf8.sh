#!/bin/bash
# 用法: ./convert_to_utf8.sh <文件或目录>

target="$1"

if [[ -z "$target" ]]; then
    echo "用法: $0 <文件或目录>"
    exit 1
fi

# 检查是否安装了 uchardet
if ! command -v uchardet &>/dev/null; then
    echo "错误: 未找到 uchardet，请先安装: sudo apt install uchardet"
    exit 1
fi

convert_file() {
    local file="$1"
    if [[ ! -f "$file" ]]; then
        return
    fi

    encoding=$(uchardet "$file")
    if [[ -z "$encoding" ]]; then
        echo "无法检测 $file 的编码，请确认文件是否有效"
        return
    fi

    if [[ "$encoding" == "UTF-8" ]]; then
        echo "$file 已经是 UTF-8，无需转换"
    else
        echo "检测到 $file 编码为 $encoding，转换为 UTF-8..."
        tmpfile="${file}.utf8.tmp"
        if iconv -f "$encoding" -t UTF-8 "$file" -o "$tmpfile"; then
            mv "$tmpfile" "$file"
        else
            echo "转换失败: $file (编码=$encoding)"
            rm -f "$tmpfile"
        fi
    fi
}

if [[ -d "$target" ]]; then
    # 遍历目录下所有普通文件
    find "$target" -type f | while read -r f; do
        convert_file "$f"
    done
elif [[ -f "$target" ]]; then
    convert_file "$target"
else
    echo "错误: $target 不是有效的文件或目录"
    exit 1
fi
