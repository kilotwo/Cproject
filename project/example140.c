/********************************************************************
	����:	2019/01/28
	ʱ��:	   20:46
	�ļ���: 	F:\CPROJECT\PROJECT\example140.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	��°ͺղ���
*********************************************************************/
#include "stdio.h"
#include "math.h"
int isPrime(int n)
{
	int i;
	if (n<=2)
	{
		return 1;
	}
	for (i=2;i<=(int)sqrt(n);i++)
	{
		if ( n%i==0 )
		{
			return 0;
		}
	}
	return 1 ;
}
void main()
{
	int i=0,n=0;
//	printf("the test is %d\n",isPrime(2));
	
	int count=0;
	for (i=2;i<100;i+=2)
	{
		for (n=1;n<i;n++)
		{
		if ( isPrime(n)==1 && isPrime(i-n) ==1 )
			printf("%d + %d = %d ; ",n,i-n,i );
		}
			printf("\n");	
	}
}
