/********************************************************************
	����:	2019/01/14
	ʱ��:	   21:12
	�ļ���: 	F:\CPROJECT\PROJECT1\example3.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	n����תʮ����
*********************************************************************/
#include "stdio.h"
#include "string.h"
main()
{
	int i,j,k=0,l=0;
	int n=0;
	char c[100]={0};
	printf("please input number \n");
	gets(c);
	strupr(c);
	printf("please input n ����\n");
	scanf("%d",&n);
	for (i=0;i<strlen(c);i++)
	{
		if (c[i]>='0'&&c[i]<='9')	//��һλ��������
		{
			k=c[i]-'0';
		}else if (n>10&&c[i]>'A'&&c[i]<='F')
		{
			k=c[i]-'A'+10;
		}
		l=l*n+k;
	}
	printf("the dec is %d\n",l);
}
