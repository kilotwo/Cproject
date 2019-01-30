/********************************************************************
	日期:	2019/01/29
	时间:	   23:05
	文件名: 	F:\CPROJECT\PROJECT\example159.c
	格式:	c
	作者:	$ kilotwo $
	目的:	一数三平方
*********************************************************************/
#include "stdio.h"
#include "math.h"
int isPrime(long n)
{
	int p;
	p=(int)sqrt(n);
	if (p*p == n)
	{
		return 1;
	}else
		return 0;

}
main()
{

	long i,n;
	int a,b;
	for (i=100000;i<999999;i++)
	{	
		b=i%1000;
		a=i/1000;
		if (isPrime(a)&&isPrime(b)&&isPrime(i))
		{
			printf("%d , ",i);
		}
	}
	
}