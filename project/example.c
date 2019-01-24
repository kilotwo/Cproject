/********************************************************************
	日期:	2019/01/24
	时间:	   14:28
	文件名: 	F:\CPROJECT\PROJECT\example.c
	格式:	c
	作者:	$ kilotwo $
	目的:	指针练习1
*********************************************************************/
#include "stdio.h"
#include "string.h"
void sort(char *string,int n);
void main()
{
	int i=0;
	char *p[7]={
		"C language","Basic","World wide","Hello world","One world","Apple ","a"
	};
	sort(p,7);
	for (i=0;i<7;i++)
	{
		printf("%s<",p[i]);	
	}
	printf("\n");	
}
void sort(char *string[],int n)
{
	int i,j;//选择排序
	char *temp;
	for (i=0;i<n;i++)
		for (j=i+1;j<n;j++)
		{
			if ( strcmp(string[i],string[j]) >0 )
			{
				temp=string[j];
				string[j]=string[i];
				string[i]=temp;
			}
		}
}