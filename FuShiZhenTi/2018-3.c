/********************************************************************
	����:	2019/02/21
	ʱ��:	   17:22
	�ļ���: 	F:\CPROJECT\FUSHIZHENTI\2018-3.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	����������ϰ
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
	head->next =NULL;				//ͷ�ڵ��ָ����
	pre = head ;							//��ǰ�ڵ�Ϊͷ�ڵ�
	num=1;
	while (num!=0)
	{
		//����һ���µĽڵ�
	temp =	(struct Node*)malloc(sizeof(struct Node));	
	pre->next = temp;
	pre = temp;
	//����ѧ��
	temp->number=num;
	//���������
	printf("Please input  the score");
	scanf("%d",&score);
	getchar();
	//����������
	printf("Please input  the name\n");
	gets(name);
	//����ýڵ�
	temp->score = score;
	strcpy(temp->name,name);
	temp->next =NULL;
	//������һ���ڵ��ж��Ƿ�Ϊ0
	printf("Please input  next num\n");
	scanf("%d",&num);

	}
	return head;
} 
void InsertList(struct Node* head,int num,int score,char *s)		//��̬����
{
	struct Node *temp;			//������ʱ����
	struct Node *pre;				//�ҵ���
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