/********************************************************************
	����:	2019/01/29
	ʱ��:	   11:34
	�ļ���: 	F:\CPROJECT\PROJECT\example154.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	���ػ�����
*********************************************************************/
#include "stdio.h"
#include "stdlib.h"
int isHuiwen(long n)		//�жϻ�����
{
	char c[10];
	int len,i;
	ltoa(n,c,10);			//long����ת�ַ��� n�����֣�c���ַ����飬10����
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