#!/bin/sh
# File Name: run.sh
# Author: Stan.Lch
# mail: fn.stanc@gmail.com
# Created Time: 2018/7/12 13:15:37

export PATH=$PATH:./tool
python ./src/xlstool.py -t c -o cs --package_name=MyGame --loader_name=ConfigData ./example ./output
