/********************************************************************
	����:	2019/01/24
	ʱ��:	   12:07
	�ļ���: 	F:\CPROJECT\PROJECT\example.58.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	ѭ����λ
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