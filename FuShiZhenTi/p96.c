/********************************************************************
	日期:	2019/02/27
	时间:	   22:47
	文件名: 	F:\CPROJECT\FUSHIZHENTI\p96.c
	格式:	c
	作者:	$ kilotwo $
	目的:	计算字符串中子字符串出现的次数
*********************************************************************/
#include "stdio.h"
#include "string.h"
int findChildCnt(char* str1,char *str2)
{
	int len = strlen(str2);
	int cnt=0;
	while (str1 = strstr(str1,str2) )	//str1为返回找到的首地址
	{
		cnt++;
		str1 += len;				//从后面开始接着找
	}
	return cnt;

}
int main()
{
	char str1[100] , str2[100];
	printf("please input str1 :");
	gets(str1);
	printf("please input str2 :");
	gets(str2);
	printf("Child  Cnt is : %d \n",findChildCnt(str1,str2));
	return 0;
}