/********************************************************************
	����:	2019/01/23
	ʱ��:	   22:42
	�ļ���: 	F:\CPROJECT\PROJECT\example41.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	��ָ��λ�ú�����ַ���
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
void insert(char* s1,char*s2,int pos)		//����S1ԭ�ַ���S2��Ҫ������ַ���������λ�� 
{
	char string[100];						//����string���м��ַ���
	if(pos<0||pos>strlen(s1))				//�������λ���Ǵ��
	{
		printf("error!");
		exit(1);
	}else if (strlen(s1)==0)				//���ԭ�ַ����ǿյ� ��ֱ�Ӹ��ƽ�ȥ����
	{
		strcpy(s1,s2);
	}else if (strlen(s1)!=0)				//�����������ԭ�ַ���
	{
		strncpy(string,s1,pos);				//�Ƚ�Ҫ�����ַ���λ��֮ǰ���ַ������м����
		string[pos]='\0';					//��ֹ
		strcat(string,s2);					//֮��Ҫ������ַ���ƴ�����м����֮��
		strcat(string,(s1+pos));			//Ȼ�󽫸ղ�S1ʣ����ַ���ƴ�����м����֮��
		puts(string);						//�������м����
	}
		

}



