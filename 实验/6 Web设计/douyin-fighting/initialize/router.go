package initialize

import (
	"fmt"
	"github.com/gin-gonic/gin"
	"github.com/goldenBill/douyin-fighting/controller"
	"github.com/goldenBill/douyin-fighting/global"
	"github.com/goldenBill/douyin-fighting/middleware"
)

func Router() {
	r := gin.Default()
	// 静态文件存放目录
	r.Static("/static", "./public")

	apiRouter := r.Group("/douyin")

	// basic apis
	apiRouter.GET("/feed/", controller.Feed)
	apiRouter.POST("/user/register/", controller.Register)
	apiRouter.POST("/user/login/", controller.Login)
	apiRouter.GET("/publish/list/", controller.PublishList)

	// extra apis - I
	apiRouter.GET("/favorite/list/", controller.FavoriteList)
	apiRouter.GET("/comment/list/", controller.CommentList)

	// extra apis - II
	apiRouter.GET("/relation/follow/list/", controller.FollowList)
	apiRouter.GET("/relation/follower/list/", controller.FollowerList)

	// 用户权限校验
	authed := apiRouter.Group("/")
	authed.Use(middleware.JWT())
	{
		// basic apis
		//authed := apiRouter
		authed.GET("/user/", controller.UserInfo)

		// extra apis - I
		authed.POST("/favorite/action/", controller.FavoriteAction)
		authed.POST("/comment/action/", controller.CommentAction)

		// extra apis - II
		authed.POST("/relation/action/", controller.RelationAction)
	}

	// 用户权限校验 + 文件格式大小检车
	authed2 := apiRouter.Group("/")
	authed2.Use(middleware.JWT())
	//fmt.Println("1111111111111111111")
	authed2.Use(middleware.FileCheck())
	{
		// basic apis
		//authed2 := apiRouter
		//fmt.Println("1111111111111111111")
		authed2.POST("/publish/action/", controller.Publish)
	}


	fmt.Printf("%s:%d", global.CONFIG.GinConfig.Host, global.CONFIG.GinConfig.Port)

	r.Run(fmt.Sprintf("%s:%d", global.CONFIG.GinConfig.Host, global.CONFIG.GinConfig.Port))
}
