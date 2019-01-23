/********************************************************************
	日期:	2019/01/23
	时间:	   17:50
	文件名: 	F:\CPROJECT\PROJECT\example38.c
	格式:	c
	作者:	$ kilotwo $
	目的:	不用strcat 连接两个字符串
*********************************************************************/
#include "stdio.h"
#include "string.h"
main()
{

	int i=0,j=0;
	char a[50]={0},b[100]={0};
	printf("please input str a\n");
	gets(a);
	printf("please input str b \n");
	gets(b);
	while(a[i]!=0)
	{
		i++;
	}
	while (b[j]!=0)
	{
		a[i]=b[j];
		i++;
		j++;
	}
	printf("%s\n",a);

}