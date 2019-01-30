/********************************************************************
	日期:	2019/01/29
	时间:	   10:53
	文件名: 	F:\CPROJECT\PROJECT\example149.c
	格式:	c
	作者:	$ kilotwo $
	目的:	可逆素数
*********************************************************************/
#include "stdio.h"
#include "math.h"
int isPrime(int n )
{
	int i;
	if (n<=2)
	{
		return 1;
	}else
	{
		for (i=2;i<=sqrt(n);i++)
		{
			if (n%i==0)
			{
				return 0;
			}
		}
		return 1;
	}
	
}

int convert(int n)
{
	int a,b,c,d;
	a=n/1000;
	b=n/100%10;
	c=n/10%10;
	d=n%10;
	return d*1000+c*100+b*10+a;
}
void main()
{
	int i=1000,j,count=0;

	for (i=1000;i<10000;i++)
	{

		j=convert(i);
		if (isPrime(i) && isPrime(j))
		{
		
			if (i<j)
			{
			count++;
			printf("%d,",i);
			if (count%10==0)
			{
				printf("\n");
			}
			}else
				continue;
		
		}
	}
}
