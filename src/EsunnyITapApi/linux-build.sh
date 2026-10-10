#!/usr/bin/env bash
set -euo pipefail

SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
if [[ "$SCRIPT_DIR" != "$(pwd -P)" ]]; then
    echo "Error: This script must be run from its own directory: $SCRIPT_DIR" >&2
    exit 1
fi

cmake -S "$SCRIPT_DIR" -B "$SCRIPT_DIR/linux-build" -DCMAKE_BUILD_TYPE=Release
cmake --build "$SCRIPT_DIR/linux-build" --parallel