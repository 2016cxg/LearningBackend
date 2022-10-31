#!/bin/bash
dir="./logs"
if [ ! -d "$dir" ];then
mkdir $dir
fi

find ./ -name "douyin-fighting" | xargs rm -rf

export GIN_MODE=release
go build -o douyin-fighting main/main.go
./douyin-fighting | tee -a ./logs/"$(date +'%Y-%m-%d-%H:%M:%S')".log