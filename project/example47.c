/********************************************************************
	����:	2019/01/24
	ʱ��:	   11:23
	�ļ���: 	F:\CPROJECT\PROJECT\example47.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	С����������
*********************************************************************/
#include "stdio.h"
void main()
{
	int n;
	float sum=100.0,s=50.0,ten=0.0;
	for (n=1;n<=9;n++)
	{
		sum+=s*2;
		s=s/2;
	}
	printf("the total length is %f\n",sum);
	printf("the 10 h is %f \n",s);


}