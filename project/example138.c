/********************************************************************
	日期:	2019/01/28
	时间:	   20:19
	文件名: 	F:\CPROJECT\PROJECT\example138.c
	格式:	c
	作者:	$ kilotwo $
	目的:	斐波那契数列
*********************************************************************/
#include "stdio.h"

void main()
{

	int i,j;
	int a[30];
	a[0]=1;
	a[1]=1;
	for (i=2;i<30;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for (i=0;i<30;i++)
	{	
		printf("%d ",a[i]);
		if (i%5==0&&i!=0)
		{
			printf("\n");
		}
	}
}