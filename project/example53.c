/********************************************************************
	日期:	2019/01/24
	时间:	   11:43
	文件名: 	F:\CPROJECT\PROJECT\example53.c
	格式:	c
	作者:	$ kilotwo $
	目的:	百鸡百钱问题
*********************************************************************/
#include "stdio.h"
main()
{
	
	int i,j,k;//鸡的个数
	for (i=0;i<=20;i++)
	for(j=0;j<=33;j++)
		for (k=0;k<=99;k++)
		{
			if (i+j+k==100&&k%3==0&&i*5+j*3+k/3==100)
			{
				printf("公鸡数量%3d 母鸡数量%3d 小鸡数量%3d\n",i,j,k);
			}
		
		}

}