/********************************************************************
	����:	2019/02/21
	ʱ��:	   10:25
	�ļ���: 	F:\CPROJECT\FUSHIZHENTI\2018-1.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	2018-1 
*********************************************************************/
#include "stdio.h"
#include "math.h"
int isPrime(int n)
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

void main()
{
	int n=3;
	int i=0,j=0;
	int sum=0;
	for (i=1;i<90;i++)
	{
		if (isPrime(i)&&isPrime(i+4)&&isPrime(i+10))
		{
			sum+=i;
		}
	}
	printf("sum is %d\n",sum);
}