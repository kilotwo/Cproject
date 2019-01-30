/********************************************************************
	日期:	2019/01/30
	时间:	   9:39
	文件名: 	F:\CPROJECT\PROJECT\example163.c
	格式:	c
	作者:	$ kilotwo $
	目的:	e的计算
*********************************************************************/
#include "stdio.h"

void main()
{
	int i;
	float k=1e-10;
	float e=1;
	float j=1;
	int temp=2;
	while(1/j>k)
	{
		e+=1/j;
		j=j*temp;
		temp++;
	}
	printf(" %f ",e);

}