/********************************************************************
	日期:	2019/01/24
	时间:	   22:02
	文件名: 	F:\CPROJECT\PROJECT\lianbiaotest.c
	格式:	c
	作者:	$ kilotwo $
	目的:	链表的练习
*********************************************************************/
#include "stdio.h"
#include "malloc.h"
#include "stdlib.h"
struct Student	//首先创建节点结构，表示每一个节点
{
	int num;				//学号
	struct Student *next;		//指向下一个结点的指针
};
int iCount;						//全局变量表示链表长度
struct Student *create()		//创建一个函数，此函数类型为指针类型，返回值为指针值指向一个节点数据，实际上是返回链表的头指针
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
		if (iCount==1)				//第一次添加，新节点即为首节点也为最后一个节点
		{
			pNew->next=pHead;	
			pEnd=pNew;
			pHead=pNew;
		}else
		{
			pNew->next=NULL;		//必须项：新节点为最后一个所以为空
			pEnd->next=pNew;		//原来的尾结点指向新节点
			pEnd=pNew;				//pEnd指向新节点
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