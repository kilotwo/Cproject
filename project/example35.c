/********************************************************************
	����:	2019/01/23
	ʱ��:	   17:18
	�ļ���: 	F:\CPROJECT\PROJECT\example35.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	�ַ�������
*********************************************************************/
#include "stdio.h"
#include "string.h"
#define N 100
void convert(char s[N])	;
void main()
{
	int i;
	char s[N];
	printf("please input  string\n");
		gets(s);
	printf("Origin str is %s\n",s);
	convert(s);
}
void convert(char s[N])
{
	int i,j,temp;
		for (i=0;i<strlen(s)/2;i++)
		{
			j=strlen(s)-1;
			temp=s[j-i];
			s[j-i]=s[i];
			s[i]=temp;
			
		}
		printf("Now the string is %s\n",s);
}


