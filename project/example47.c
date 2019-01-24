/********************************************************************
	日期:	2019/01/24
	时间:	   11:23
	文件名: 	F:\CPROJECT\PROJECT\example47.c
	格式:	c
	作者:	$ kilotwo $
	目的:	小球下落问题
*********************************************************************/
#include "stdio.h"
void main()
{
	int n;
	float sum=100.0,s=50.0,ten=0.0;
	for (n=1;n<=9;n++)
	{
		sum+=s*2;
		s=s/2;
	}
	printf("the total length is %f\n",sum);
	printf("the 10 h is %f \n",s);


}