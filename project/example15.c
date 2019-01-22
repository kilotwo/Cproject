/********************************************************************
	日期:	2019/01/17
	时间:	   9:12
	文件名: 	F:\CPROJECT\PROJECT1\example15.c
	格式:	c
	作者:	$ kilotwo $
	目的:	这是一个余弦//正切函数题
*********************************************************************/
#include "stdio.h"
#include "math.h"
	main()
	{
	int x=0,m=0;
	double y=0.0;
	for (y=1; y>=0;y-=0.1)
	{
	//	x=acos(y)*10;
			x=atan(y)*10;
		for (m=0;m<=x;m++)
		{
			printf(" ");
		}
		printf("*");
		printf("\n");
	}

	for (y=0; y>=-1;y-=0.1)
	{
		x=31+atan(y)*10;
	for (m=0;m<=x;m++)//一个周期2*pi*10=62
		{
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	
	}