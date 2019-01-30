/********************************************************************
	日期:	2019/01/30
	时间:	   10:09
	文件名: 	F:\CPROJECT\PROJECT\example164.c
	格式:	c
	作者:	$ kilotwo $
	目的:	最大公约数和最小公倍数
*********************************************************************/
#include "stdio.h"

void main()
{
	int a,b,c;	//a是大数字 b是小数字 c是余数
	int temp,m;
	printf(" a=? \n");
	scanf("%d",&a);
	printf(" b=? \n");
	scanf("%d",&b);
	if (a<b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	c=a%b;
	m=a*b;
	while(c!=0)
	{
		a=b;		//a是大的数
		b=c;		//b是小的数
		c=a%b;		//c依然是余数
	}
	printf("最小公倍数是%d\n",m/b);
	printf("最大公约数是%d\n",b);
}

