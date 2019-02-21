/********************************************************************
	日期:	2019/02/20
	时间:	   21:01
	文件名: 	F:\Cproject\project\lianbiao.c
	格式:	c
	作者:	$ kilotwo $
	目的:	带头链表
*********************************************************************/
#include "stdio.h"
#include "stdlib.h"

struct Node
{
	int data;
	struct Node* next;
};
//创建链表
struct Node* create(int a[])
{
	int i;
	struct	Node *p,*pre,*head;		//*p是用来用的 *pre表示当前节点 *head表示头节点
	head =(struct Node*)malloc(sizeof(struct Node));
	head->next=NULL;//头节点不需要数据域，指针域先设为NULL
	pre=head;		//当前节点为头节点
	for (i=0;i<5;i++)
	{
		p = (struct Node*)malloc(sizeof(struct Node));		//新建一个节点
		p->data = a[i];		//新节点赋值
		p->next =NULL;		//新节点下一个空
		pre->next =p;		//当前节点下一个是新节点从而连接起来
		pre=p;				//当前节点后移改为新节点
	}
	return head;
}

//查找
int search(struct Node* head,int x)
{
	int count =0;
	struct Node* p =head->next;
	while( p != NULL)
	{
	if (p->data == x )
	{
		count++;
	}
	p=p->next;
	}
	return count;
}
//插入
int insert(struct Node* head,int pos,int data)
{
	struct Node* p = head;
	struct Node* q= (struct Node*)malloc(sizeof(struct Node));		//新建一个节点
	int i;
	for (i=0;i<pos-1;i++)		//在5号位往后指4次
	{
		p=p->next;
	}

	q->data =data;
	q->next = p->next;
	p->next=q;
}
void ScanList(struct Node* head )
{
	struct Node* temp=head->next;
	while (temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int a[5]={5,3,2,1,2};
	struct Node* head= create(a);
	//printf("find is %d\n",search(L,2));
//	ScanList(head);
	insert(head,3,313);
	ScanList(head);
	return 0;
}