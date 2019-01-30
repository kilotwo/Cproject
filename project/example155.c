/********************************************************************
	日期:	2019/01/29
	时间:	   12:01
	文件名: 	F:\CPROJECT\PROJECT\example155.c
	格式:	c
	作者:	$ kilotwo $
	目的:	亲密数
*********************************************************************/
#include "stdio.h"
int yinZiHe(int n)
{
	int i;
	int sum=0;
	for (i=1;i<n;i++)
	{
		if (n%i==0)
		{
		sum+=i;
		}
	}
	return sum;
}
main()
{
	int i,b=0;
//	printf("%d",yinZiHe(220));
	for (i=2;i<10000;i++)
	{
		b=yinZiHe(i);
		if (yinZiHe(b)==i && i<b)
		{
			printf(" %d => %d\n",i,b);
		}
	}

}
