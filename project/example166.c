/********************************************************************
	����:	2019/01/30
	ʱ��:	   10:39
	�ļ���: 	F:\CPROJECT\PROJECT\example166.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	���ַ�
*********************************************************************/
#include "stdio.h"
#include "math.h"
void main()
{
	float x1=1.5;
	float x2=4.5;
	float x0=0;
	x0=(x1+x2)/2;
	while(fabs(sin(x0))>0.0000001)
{
	if (sin(x1)*sin(x0)<0)		//���
	{
		x2=x0;
		
	}else if (sin(x0)*sin(x2)<0)	//�ұ�
	{
		x1=x0;	
	}
	x0=(x1+x2)/2;
}

	printf("x = %f \n",x0);

}
