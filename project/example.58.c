/********************************************************************
	日期:	2019/01/24
	时间:	   12:07
	文件名: 	F:\CPROJECT\PROJECT\example.58.c
	格式:	c
	作者:	$ kilotwo $
	目的:	循环移位
*********************************************************************/
#include "stdio.h"
right(unsigned num ,int n);
void main()
{
	unsigned a;
	int n;
	printf("please input a 8 num\n");
	scanf("%o",&a);
	printf("please input n \n");
	scanf("%d",&n);
	printf("the right now is %o\n",right(a,n));

}
right(unsigned num ,int n)
{
	unsigned z;
	z=(num>>n)|(num<<(16-n));
	return z;
}