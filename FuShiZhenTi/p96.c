/********************************************************************
	����:	2019/02/27
	ʱ��:	   22:47
	�ļ���: 	F:\CPROJECT\FUSHIZHENTI\p96.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	�����ַ��������ַ������ֵĴ���
*********************************************************************/
#include "stdio.h"
#include "string.h"
int findChildCnt(char* str1,char *str2)
{
	int len = strlen(str2);
	int cnt=0;
	while (str1 = strstr(str1,str2) )	//str1Ϊ�����ҵ����׵�ַ
	{
		cnt++;
		str1 += len;				//�Ӻ��濪ʼ������
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