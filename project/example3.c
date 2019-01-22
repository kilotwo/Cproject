/********************************************************************
	日期:	2019/01/14
	时间:	   21:12
	文件名: 	F:\CPROJECT\PROJECT1\example3.c
	格式:	c
	作者:	$ kilotwo $
	目的:	n进制转十进制
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
	printf("please input n 进制\n");
	scanf("%d",&n);
	for (i=0;i<strlen(c);i++)
	{
		if (c[i]>='0'&&c[i]<='9')	//这一位数是数字
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
