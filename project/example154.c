/********************************************************************
	日期:	2019/01/29
	时间:	   11:34
	文件名: 	F:\CPROJECT\PROJECT\example154.c
	格式:	c
	作者:	$ kilotwo $
	目的:	三重回文数
*********************************************************************/
#include "stdio.h"
#include "stdlib.h"
int isHuiwen(long n)		//判断回文数
{
	char c[10];
	int len,i;
	ltoa(n,c,10);			//long整型转字符串 n是数字，c是字符数组，10进制
	len = strlen(c);
	for (i=0;i<len/2;i++)
	{
		if (c[i] != c[len-1-i])
		{
			return 0;
		}
	}
	return 1;
}
main()
{
	int i;
	for (i=10;i<=1000;i++)
	{
		if (isHuiwen(i)&&isHuiwen(i*i)&&isHuiwen(i*i*i))
		{
			printf(" n = %d, n*n = %d, n*n*n = %d \n",i,i*i,i*i*i);
		}
	}
}