/********************************************************************
	日期:	2019/01/28
	时间:	   10:23
	文件名: 	F:\CPROJECT\PROJECT\l3.c
	格式:	c
	作者:	$ kilotwo $
	目的:	练习链表的基本操作
*********************************************************************/
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

struct Node			//定义节点
{
	int num;
	char Name[10];
	struct Node* next;

};
struct Node* head = NULL;	//定义头指针
struct Node* end  = NULL;	//定义尾指针

void AddList(int num,char* name);	//增（尾增）
void Scanlist();					//遍历
struct Node* FindNode(int num);		//查
void FreeList();					//全部删除
void AddListRand(int index,int number,char* Name);//指定位置插入
void DelectListTail();					//删除头
void DelectListhead();					//删除尾
void DelectListRand(int index);			//指定删除

char* a[5]={"apple","bob","can","dad","effect"  };
	main()
{
		int i=0;
		for (i=0;i<5;i++)
		{
		AddList(i,a[i]);
		}
	DelectListRand(2);
	Scanlist();
//	AddListRand(3,22,"New");
//	Scanlist();
	FreeList();
//	FindNode(3);

}
void AddList(int num,char* name)
{
	//申请一个临时节点
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->num=num;
	//数组不能整体赋值
	strcpy(temp->Name,name);
	temp->next=NULL;

	if (head==NULL)
	{
		head=temp;
		end= temp;
	}
	else
	{
		end->next=temp;
		end=temp;
	}
}
void Scanlist()
{
	struct Node* temp =head;
	char name[10];
	int  num=0;
	while(temp!=NULL)
	{
		num=temp->num;
		strcpy(name,temp->Name);
		printf("the num is %2d,the name is %s\n",num,name);
		temp=temp->next;
	}
	
}
struct Node* FindNode(int num)
{
	struct Node* temp=head;
	char name[10];
	int  number=0;

	while(temp!=NULL)
	{
		number=temp->num;
		if (number == num )
		{
		strcpy(name,temp->Name);
		printf("找到the num is %2d,the name is %s\n",num,name);
		return temp;
		}
		temp=temp->next;
	}
}
void FreeList()
{
	struct Node* temp =head;
	
	while(temp!=NULL)
	{
		struct Node* pt =temp;
		temp=temp->next;
		free(pt);
	}
	head =NULL;
	end  =NULL;
}
void AddListRand(int index,int number,char* Name)
{	
	struct Node* pt=FindNode(index);
	//申请一个临时节点
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	if (head==NULL)
	{
		printf("这个链表为空，无节点\n");
		return;
	}
	//寻找插入位置

	if (pt == NULL)
	{
		printf("查无此节点\n");
		return;
	}
	//有此节点

	temp->num=number;
	strcpy(temp->Name,Name);
	//找到的节点是尾结点
	if (pt->next == NULL)
	{
		end->next=temp;
		end = temp;
		end->next=NULL;
	}else	//找到的节点在中间
	{
	temp->next=pt->next;
	pt->next=temp;
	}

}
void DelectListhead()
{
	//申请一个临时节点
	struct Node* temp=head;
	if (head==NULL)
	{
		printf("这个链表为空，无节点\n");
		return;
	}	
	head=head->next;
	free(temp);
}
void DelectListTail()
{
	struct Node* temp=head;
	if (head==NULL)
	{
		printf("这个链表为空，无节点\n");
		return;
	}
	if (head == end)
	{
		FreeList();
	}else
	{//有一个以上节点
	while (temp->next!=end)
	{
		temp=temp->next;
	}
	free(end);
	end=temp;
	end->next=NULL;
	}
}
void DelectListRand(int index)
{
	struct Node* temp=FindNode(index);
	struct Node* pt=head;
	if (head==NULL)
	{
		printf("这个链表为空，无节点\n");
		return;
	}
	if (temp==NULL)
	{
		printf("查无此点，无法执行删除\n");
		return;
	}
	else if (head == end)
	{
		FreeList();
	}else if (head->next == end)
	{
		if (temp == head)
		{
			DelectListhead();
		}else if (temp == end)
		{
			DelectListTail();
		}
	}
	else 	//有2个以上节点
	{
		if (temp == head)
			DelectListhead();
		else if (temp == end)
			DelectListTail();
	//找前一个
		else
		{
			while (pt->next!=temp)
		{
			pt=pt->next;
		}
	pt->next=temp->next;
	free(temp);

		}
	}

}


