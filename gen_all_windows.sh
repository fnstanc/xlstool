#!/bin/sh
# File Name: run.sh
# Author: Stan.Lch
# mail: fn.stanc@gmail.com
# Created Time: 2018/7/12 13:15:37

# export xls data & generate proto file
python ./src/xlstool.py -t c -o cs,cpp --package_name=MyGame --loader_name=ConfigData -p ./example/xls ./output

for filename in ./output/proto/*.proto; do
    protoc -I ./output/proto --cpp_out=./output/cpp/ $filename
    protoc -I ./output/proto --csharp_out=./output/cs/ $filename
done

cp ./output/cpp/* ./example/cpp-example/src
cp ./output/bytes/ConfigData.bytes ./example/unity-example/Assets/Resources
cp ./output/cs/* ./example/unity-example/Assets/Scripts/Proto
