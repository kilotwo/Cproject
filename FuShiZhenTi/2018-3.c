/********************************************************************
	日期:	2019/02/21
	时间:	   17:22
	文件名: 	F:\CPROJECT\FUSHIZHENTI\2018-3.c
	格式:	c
	作者:	$ kilotwo $
	目的:	单向链表练习
*********************************************************************/
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
struct Node
{
		int number;
		char name[20];
		int score;
		struct Node* next;
};
struct Node* create()
{
	struct   Node *head,*pre,*temp;
	int num,score;
	char name[20];
	head = (struct Node*)malloc(sizeof(struct Node));
	head->next =NULL;				//头节点的指针域
	pre = head ;							//当前节点为头节点
	num=1;
	while (num!=0)
	{
		//申请一个新的节点
	temp =	(struct Node*)malloc(sizeof(struct Node));	
	pre->next = temp;
	pre = temp;
	//存入学号
	temp->number=num;
	//请输入分数
	printf("Please input  the score");
	scanf("%d",&score);
	getchar();
	//请输入姓名
	printf("Please input  the name\n");
	gets(name);
	//存入该节点
	temp->score = score;
	strcpy(temp->name,name);
	temp->next =NULL;
	//输入下一个节点判断是否为0
	printf("Please input  next num\n");
	scanf("%d",&num);

	}
	return head;
} 
void InsertList(struct Node* head,int num,int score,char *s)		//动态插入
{
	struct Node *temp;			//定义临时变量
	struct Node *pre;				//找到的
	struct Node *insert = (struct Node*)malloc(sizeof(struct Node));
	insert->number = num;
	insert->score =score;
	strcpy(insert->name,s);
	for (temp = head->next; temp!=NULL;temp=temp->next)
	{
		if (temp->next->number == num)
		{
			pre = temp->next;
			insert->next=pre;
			temp->next = insert;
			break;
		}
	}
		
}
void ScanList(struct Node* head)
{
	struct Node *temp;

	for (temp = head->next; temp!=NULL;temp=temp->next)
	{
		printf("Name is %s ,Score is %d \n",temp->name,temp->score);
	}
}
void main()
{
struct   Node *head =create();
InsertList(head,3,666,"insert");
	ScanList(head);
}