/********************************************************************
	����:	2019/01/23
	ʱ��:	   18:17
	�ļ���: 	F:\CPROJECT\PROJECT\example39.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	ɾ���ַ�����ָ��λ�õ�ָ���ַ�
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