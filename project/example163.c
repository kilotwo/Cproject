/********************************************************************
	����:	2019/01/30
	ʱ��:	   9:39
	�ļ���: 	F:\CPROJECT\PROJECT\example163.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	e�ļ���
*********************************************************************/
#include "stdio.h"

void main()
{
	int i;
	float k=1e-10;
	float e=1;
	float j=1;
	int temp=2;
	while(1/j>k)
	{
		e+=1/j;
		j=j*temp;
		temp++;
	}
	printf(" %f ",e);

}