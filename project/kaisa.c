/********************************************************************
	����:	2019/01/30
	ʱ��:	   22:28
	�ļ���: 	F:\Cproject\project\kaisa.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	��������
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