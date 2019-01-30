/********************************************************************
	日期:	2019/01/30
	时间:	   22:28
	文件名: 	F:\Cproject\project\kaisa.c
	格式:	c
	作者:	$ kilotwo $
	目的:	凯撒加密
*********************************************************************/
#include "stdio.h"
#include "string.h"
	main()
{

	char arr[10];
	int i;
	printf("please input a password < 10 \n");
	gets(arr);
	for (i=0;i<strlen(arr);i++)
	{
		arr[i]=arr[i]+3;
	}
	for (i=0;i<strlen(arr);i++)
	{
		printf("%c",arr[i]);
	}
}