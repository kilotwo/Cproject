/********************************************************************
	����:	2019/01/25
	ʱ��:	   16:56
	�ļ���: 	F:\CPROJECT\PROJECT\l1.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	�����һ��
*********************************************************************/
#include "stdio.h"
#include "string.h"
#include "malloc.h"

struct Student{
		char name[10];
		struct Student *next;
};	
struct Student *create()
{
	struct Student *head ,*now ,*next;
	char str[10];
	char flag;
	printf("please input name:\n");
	scanf("%s",str);
	getchar();
	head=	(struct Student*)malloc(sizeof(struct Student));
	strcpy(head->name,str);
	now =head;
		printf("�Ƿ��������");
		scanf("%c",&flag);
		while(flag!='n')
		{
		printf("please input name :\n");
		scanf("%s",str);
		getchar();

		next=(struct Student*)malloc(sizeof(struct Student));
		strcpy(next->name,str);
		now->next=next;		//��ǰָ��ָ����һ��ָ��
		now=next;			//��ǰָ���ɸռ����ָ��
		printf("�Ƿ��������");
		scanf("%c",&flag);
		}
		now->next=NULL;
		return head;

}
void list(struct Student *p)	//����
{
	while(1)
	{
		printf("%s \n",p->name);
		if(p->next!=NULL)
		{
			p=p->next;
		}else
			break;	
	}
}
void insert(struct Student *p)
{
	struct Student *insert,*now;
	char str[10];
	int pos;
	now=p;
	printf("please input student name :\n");
	scanf("%s",str);
	getchar();
	
	insert=(struct Student*)malloc(sizeof(struct Student));
	strcpy(insert->name,str);
	printf("please input ��Ҫ�����λ��\n");
	scanf("%d",&pos);
	if(pos>0)
	{
	while (pos>1)
	{
		now=now->next;
		pos--;
	}
	insert->next=now->next;
	now->next=insert;
	}else if(pos==0)
	{
	//�����һ��Ԫ��ǰ��
	p=insert;
	insert->next=now;
	}
	printf("����Ԫ�غ����µ�\n");
	list(p);
}
main()
{
		struct Student *p;
		p=create();
		list(p);
		insert(p);
}