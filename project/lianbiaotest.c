/********************************************************************
	����:	2019/01/24
	ʱ��:	   22:02
	�ļ���: 	F:\CPROJECT\PROJECT\lianbiaotest.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	�������ϰ
*********************************************************************/
#include "stdio.h"
#include "malloc.h"
#include "stdlib.h"
struct Student	//���ȴ����ڵ�ṹ����ʾÿһ���ڵ�
{
	int num;				//ѧ��
	struct Student *next;		//ָ����һ������ָ��
};
int iCount;						//ȫ�ֱ�����ʾ������
struct Student *create()		//����һ���������˺�������Ϊָ�����ͣ�����ֵΪָ��ֵָ��һ���ڵ����ݣ�ʵ�����Ƿ��������ͷָ��
{
	
	struct Student *pHead=NULL;
	struct Student *pEnd,*pNew;
	iCount=0;
	pEnd=pNew=(struct Student*)malloc(sizeof(struct Student));
	printf("Input the first num\n");
	scanf("%d",&pNew->num);
	while (pNew->num!=0)
	{
		iCount++;
		if (iCount==1)				//��һ����ӣ��½ڵ㼴Ϊ�׽ڵ�ҲΪ���һ���ڵ�
		{
			pNew->next=pHead;	
			pEnd=pNew;
			pHead=pNew;
		}else
		{
			pNew->next=NULL;		//������½ڵ�Ϊ���һ������Ϊ��
			pEnd->next=pNew;		//ԭ����β���ָ���½ڵ�
			pEnd=pNew;				//pEndָ���½ڵ�
		}
		pNew=(struct Student*)malloc(sizeof(struct Student));
		scanf("%d",&pNew->num);
	}
	free(pNew);
	return pHead;
}
void Print(struct Student* pHead)
{
struct Student *pTemp;
int index=1;
printf("the list has %d members\n",iCount);
printf("\n");
pTemp=pHead;
while(pTemp!=NULL)
{
printf("the NO.&d member is \n",index);
printf("the num is %d\n",pTemp->num);
printf("\n");
pTemp=pTemp->next;
index++;
}
}
	main()
	{
		struct Student* pHead;
		pHead=create();
		Print(pHead);			

	}