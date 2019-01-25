/********************************************************************
	日期:	2019/01/25
	时间:	   16:56
	文件名: 	F:\CPROJECT\PROJECT\l1.c
	格式:	c
	作者:	$ kilotwo $
	目的:	链表的一种
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
		printf("是否继续输入");
		scanf("%c",&flag);
		while(flag!='n')
		{
		printf("please input name :\n");
		scanf("%s",str);
		getchar();

		next=(struct Student*)malloc(sizeof(struct Student));
		strcpy(next->name,str);
		now->next=next;		//当前指针指向下一个指针
		now=next;			//当前指针变成刚加入的指针
		printf("是否继续输入");
		scanf("%c",&flag);
		}
		now->next=NULL;
		return head;

}
void list(struct Student *p)	//遍历
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
	printf("please input 需要插入的位置\n");
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
	//插入第一个元素前面
	p=insert;
	insert->next=now;
	}
	printf("插入元素后最新的\n");
	list(p);
}
main()
{
		struct Student *p;
		p=create();
		list(p);
		insert(p);
}