/********************************************************************
	日期:	2019/01/23
	时间:	   17:18
	文件名: 	F:\CPROJECT\PROJECT\example35.c
	格式:	c
	作者:	$ kilotwo $
	目的:	字符串倒置
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


