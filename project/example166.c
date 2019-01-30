/********************************************************************
	日期:	2019/01/30
	时间:	   10:39
	文件名: 	F:\CPROJECT\PROJECT\example166.c
	格式:	c
	作者:	$ kilotwo $
	目的:	二分法
*********************************************************************/
#include "stdio.h"
#include "math.h"
void main()
{
	float x1=1.5;
	float x2=4.5;
	float x0=0;
	x0=(x1+x2)/2;
	while(fabs(sin(x0))>0.0000001)
{
	if (sin(x1)*sin(x0)<0)		//左边
	{
		x2=x0;
		
	}else if (sin(x0)*sin(x2)<0)	//右边
	{
		x1=x0;	
	}
	x0=(x1+x2)/2;
}

	printf("x = %f \n",x0);

}
