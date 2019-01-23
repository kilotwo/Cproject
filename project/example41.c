/********************************************************************
	日期:	2019/01/23
	时间:	   22:42
	文件名: 	F:\CPROJECT\PROJECT\example41.c
	格式:	c
	作者:	$ kilotwo $
	目的:	在指定位置后插入字符串
*********************************************************************/
#include "stdio.h"
#include "string.h"
void insert(char* s1,char*s2,int pos);	
main()
	{
	char s1[100],s2[50];
	int pos=0;
	printf("please input s1\n");
	gets(s1);
	printf("please input s2\n");
	gets(s2);
	printf("please input pos\n");
	scanf("%d",&pos);
	insert(s1,s2,pos);
	}
void insert(char* s1,char*s2,int pos)		//输入S1原字符串S2，要插入的字符串，插入位置 
{
	char string[100];						//定义string做中间字符串
	if(pos<0||pos>strlen(s1))				//如果给的位置是错的
	{
		printf("error!");
		exit(1);
	}else if (strlen(s1)==0)				//如果原字符串是空的 那直接复制进去即可
	{
		strcpy(s1,s2);
	}else if (strlen(s1)!=0)				//如果是正常的原字符串
	{
		strncpy(string,s1,pos);				//先将要插入字符串位置之前的字符串给中间变量
		string[pos]='\0';					//截止
		strcat(string,s2);					//之后将要插入的字符串拼接在中间变量之后
		strcat(string,(s1+pos));			//然后将刚才S1剩余的字符串拼接在中间变量之后
		puts(string);						//输出这个中间变量
	}
		

}



