/********************************************************************
	日期:	2019/01/29
	时间:	   11:17
	文件名: 	F:\CPROJECT\PROJECT\example151.c
	格式:	c
	作者:	$ kilotwo $
	目的:	水仙花数
*********************************************************************/
#include "stdio.h"

void main()
{
	int i,j,n;
	int a,b,c;
	for (i=100;i<1000;i++)
	{
		a=i/100;
		b=i/10%10;
		c=i%10;
		if (a*a*a+b*b*b+c*c*c == i)
		{
			printf("%d,",i);
		}
	}

}
