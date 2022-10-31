package main

import (
	"github.com/goldenBill/douyin-fighting/initialize"
	"fmt"
)

func main() {
	initialize.Global() // 初始化全局变量
	fmt.Println("Global")
	initialize.Viper()  // 初始化配置信息
	fmt.Println("Viper")
	initialize.MySQL()  // 初始化 MySQL 连接
	fmt.Println("MySQL")
	initialize.Redis()  // 初始化 Redis 连接
	fmt.Println("Redis")
	initialize.Router() // 初始化 GinRouter
	fmt.Println("Router")
}
