#!/bin/sh
# File Name: run.sh
# Author: Stan.Lch
# mail: fn.stanc@gmail.com
# Created Time: 2018/7/12 13:15:37

# export xls data & generate proto file
python ./src/xlstool.py -t c -o cpp --package_name=MyGame --loader_name=ConfigData -p ./example/xls ./output

for filename in ./output/proto/*.proto; do
   protoc -I ./output/proto --cpp_out=./output/cpp/ $filename
done

cp ./output/cpp/* ./example/cpp-example/src
