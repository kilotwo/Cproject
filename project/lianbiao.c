/********************************************************************
	����:	2019/02/20
	ʱ��:	   21:01
	�ļ���: 	F:\Cproject\project\lianbiao.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	��ͷ����
*********************************************************************/
#include "stdio.h"
#include "stdlib.h"

struct Node
{
	int data;
	struct Node* next;
};
//��������
struct Node* create(int a[])
{
	int i;
	struct	Node *p,*pre,*head;		//*p�������õ� *pre��ʾ��ǰ�ڵ� *head��ʾͷ�ڵ�
	head =(struct Node*)malloc(sizeof(struct Node));
	head->next=NULL;//ͷ�ڵ㲻��Ҫ������ָ��������ΪNULL
	pre=head;		//��ǰ�ڵ�Ϊͷ�ڵ�
	for (i=0;i<5;i++)
	{
		p = (struct Node*)malloc(sizeof(struct Node));		//�½�һ���ڵ�
		p->data = a[i];		//�½ڵ㸳ֵ
		p->next =NULL;		//�½ڵ���һ����
		pre->next =p;		//��ǰ�ڵ���һ�����½ڵ�Ӷ���������
		pre=p;				//��ǰ�ڵ���Ƹ�Ϊ�½ڵ�
	}
	return head;
}

//����
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
//����
int insert(struct Node* head,int pos,int data)
{
	struct Node* p = head;
	struct Node* q= (struct Node*)malloc(sizeof(struct Node));		//�½�һ���ڵ�
	int i;
	for (i=0;i<pos-1;i++)		//��5��λ����ָ4��
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