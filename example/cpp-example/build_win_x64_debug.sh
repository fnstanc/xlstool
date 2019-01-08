#!/bin/sh
# File Name: build_win_x64.sh
# Author: Stan.Lch
# mail: fn.stanc@gmail.com
# Created Time: 2018/10/29 11:10:11

mkdir -p ./_build/win_x64_debug
cd ./_build/win_x64_debug
cmake -Wno-dev -A x64 -DCMAKE_BUILD_TYPE=Debug -DCMAKE_TOOLCHAIN_FILE=E:/vcpkg/scripts/buildsystems/vcpkg.cmake -DCMAKE_INSTALL_PREFIX=./_install ../..
