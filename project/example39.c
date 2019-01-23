/********************************************************************
	日期:	2019/01/23
	时间:	   18:17
	文件名: 	F:\CPROJECT\PROJECT\example39.c
	格式:	c
	作者:	$ kilotwo $
	目的:	删除字符串中指定位置的指定字符
*********************************************************************/
#include "stdio.h"
#include "string.h"
void del(char s[],int pos,int len);
main()
{
	char s[50];
	printf("please input s\n");
	gets(s);
	del(s,2,3);

}
void del(char s[],int pos,int len)
{
	int i=0;
	for (i=pos-1+len;s[i]!='\0';i++,pos++)
	{
		s[pos-1]=s[i];
	}
	s[pos-1]='\0';
	printf("now is %s\n",s);
}