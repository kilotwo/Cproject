/********************************************************************
	����:	2019/01/28
	ʱ��:	   10:23
	�ļ���: 	F:\CPROJECT\PROJECT\l3.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	��ϰ����Ļ�������
*********************************************************************/
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

struct Node			//����ڵ�
{
	int num;
	char Name[10];
	struct Node* next;

};
struct Node* head = NULL;	//����ͷָ��
struct Node* end  = NULL;	//����βָ��

void AddList(int num,char* name);	//����β����
void Scanlist();					//����
struct Node* FindNode(int num);		//��
void FreeList();					//ȫ��ɾ��
void AddListRand(int index,int number,char* Name);//ָ��λ�ò���
void DelectListTail();					//ɾ��ͷ
void DelectListhead();					//ɾ��β
void DelectListRand(int index);			//ָ��ɾ��

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
	//����һ����ʱ�ڵ�
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->num=num;
	//���鲻�����帳ֵ
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
		printf("�ҵ�the num is %2d,the name is %s\n",num,name);
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
	//����һ����ʱ�ڵ�
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	if (head==NULL)
	{
		printf("�������Ϊ�գ��޽ڵ�\n");
		return;
	}
	//Ѱ�Ҳ���λ��

	if (pt == NULL)
	{
		printf("���޴˽ڵ�\n");
		return;
	}
	//�д˽ڵ�

	temp->num=number;
	strcpy(temp->Name,Name);
	//�ҵ��Ľڵ���β���
	if (pt->next == NULL)
	{
		end->next=temp;
		end = temp;
		end->next=NULL;
	}else	//�ҵ��Ľڵ����м�
	{
	temp->next=pt->next;
	pt->next=temp;
	}

}
void DelectListhead()
{
	//����һ����ʱ�ڵ�
	struct Node* temp=head;
	if (head==NULL)
	{
		printf("�������Ϊ�գ��޽ڵ�\n");
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
		printf("�������Ϊ�գ��޽ڵ�\n");
		return;
	}
	if (head == end)
	{
		FreeList();
	}else
	{//��һ�����Ͻڵ�
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
		printf("�������Ϊ�գ��޽ڵ�\n");
		return;
	}
	if (temp==NULL)
	{
		printf("���޴˵㣬�޷�ִ��ɾ��\n");
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
	else 	//��2�����Ͻڵ�
	{
		if (temp == head)
			DelectListhead();
		else if (temp == end)
			DelectListTail();
	//��ǰһ��
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


