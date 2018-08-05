#!/bin/sh
# File Name: run.sh
# Author: Stan.Lch
# mail: fn.stanc@gmail.com
# Created Time: 2018/7/12 13:15:37

export PATH=$PATH:./tool
export PATH=$PATH:./tool/ProtoGen

# export xls data & generate proto file
python ./src/xlstool.py -t c -o cs,cpp --package_name=MyGame --loader_name=ConfigData ./example/xls ./output

for filename in ./output/proto/*.proto; do
    protoc -I ./output/proto --cpp_out=./output/cpp/ $filename
    protogen -i:$filename -o:"./output/cs/$(basename $filename .proto).cs"
done

cp ./output/bytes/ConfigData.bytes ./example/unity-example/Assets/Resources
cp ./output/cs/* ./example/unity-example/Assets/Scripts/Proto
