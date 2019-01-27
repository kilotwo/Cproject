/********************************************************************
	����:	2019/01/25
	ʱ��:	   16:58
	�ļ���: 	F:\CPROJECT\PROJECT\l2.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	������ϰ �޿�Ͷ��ɾ�Ĳ�
			//���� ͷ��� βɾ��	
*********************************************************************/
#include "stdio.h"
#include "stdlib.h"

//1.�ڵ�ṹ��		
struct Node
{
	int a;				//������
	struct Node* next;	//ָ����(ָ��ڵ��ָ�룩
};
//2.ȫ�ֶ�������ͷβָ��
struct Node* head= NULL;
struct Node* end = NULL;
//3.��������,ʵ��������������һ������,β���
void AddListTill(int a )
{
		//����һ���ڵ�
		struct Node* temp=(struct Node*)malloc(sizeof(struct Node));		//�˴�ע��ǿת

		//�ڵ����ݽ��и�ֵ
		temp->a=a;
		temp->next=NULL;		
		
		//���ӷ��������1.һ���ڵ㶼û��2.�Ѿ��нڵ��ˣ���ӵ�β����
		if(NULL==head)
		{	

			head=temp;
		//	end=temp;
		}
		else
		{
		end->next=temp;
	//	end=temp;			//β���Ӧ��ʼ��ָ�����һ��
		}
		end=temp;			//β���Ӧ��ʼ��ָ�����һ��
}

//4.�������� �� / ��ָ����
void ScanList()
{
	struct Node *temp =head;		//����һ����ʱ������ָ��ͷ
	while (temp !=NULL)
	{
		printf("%d\n",temp->a);
		temp = temp->next;		//tempָ����һ���ĵ�ַ ��ʵ��++����
	}

}
//5.��ѯָ���Ľڵ� ���� һ������
struct Node* FindNode(int a )
{
	struct Node *temp =head;
	while(temp !=NULL)
	{
	if(a == temp->a)
	{
		return temp;
	}
	temp = temp->next;
	}
	//û�ҵ�
		return NULL;
} 
//6.������� ȫ��ɾ��
void FreeList()
{
	//һ��һ��NULL
	struct Node *temp =head;		//����һ����ʱ������ָ��ͷ
	while (temp !=NULL)
	{
	//	printf("%d\n",temp->a);
		struct Node* pt =temp;
		temp = temp->next;		//tempָ����һ���ĵ�ַ ��ʵ��++����
		free(pt);					//�ͷŵ�ǰ
	}
	//ͷβ���	��Ȼ�´ε�ͷ�ͽ���0x10
	head =NULL;
	end =NULL;
}
//7.��ָ��λ�ò���ڵ�
void AddListRand(int index,int a)
{	
	struct Node* pt =FindNode(index);
	//�д˽ڵ�
	//��a �����ڵ�
	struct Node* temp =(struct Node *)malloc(sizeof(struct Node));
	if (NULL==head)
	{
		printf("����û�нڵ�\n");
		return;
	}
	
	if(NULL==pt)
	{
		printf("û��ָ���ڵ�\n");
		return;
	}

	//�ڵ��Ա���и�ֵ
	temp->a=a;
	temp->next=NULL;
	//���ӵ������� 1.�ҵ��Ľڵ���β�� 2.�ҵ��Ľڵ����м� 
	if (pt == end)
	{
		//β�͵���һ��ָ���²���Ľڵ�
	end->next=temp;
	//�µ�β��
	end=temp;
	}else
	{
		// �������� ���Ƚ�Ҫ����Ľڵ�ָ��ָ��ԭ���ҵ��ڵ����һ����
	temp->next=pt->next;
		//����ǰ��
	pt->next=temp;
	}


}
//8.βɾ��
void DeleteListTail()
{ 
	if (NULL == end)
	{
		printf("����Ϊ�գ�����ɾ��\n");
		return;
	}
	//����Ϊ�� 
	//������һ���ڵ�
	 if (head==end)
	 {
		 free(head);
		 head=NULL;
		 end=NULL; 
	 }
	 else
	 {
		//�ҵ�β��ǰһ���ڵ�
		 struct Node* temp =head;
		 while (temp->next!=end)
		 {
			 temp = temp->next;
		 }
		 //�ҵ��ˣ�ɾβ��
		//�ͷ�β��
		 free(end);
		 //β��Ǩ��
		 end=temp;
		 //β��ָ��ΪNULL
		 end->next=NULL;
	 }

}
//9.ɾ��ͷ
void DeleteListHead()
{	//��ס��ͷ
	struct Node* temp=head;
	//������ 
	if (NULL==head)
	{
			printf("����Ϊ��\n");
			return;
	}

	head=head->next;//ͷ�ĵڶ����ڵ����µ�ͷ
	free(temp);

}
//10.ɾ��ָ���ڵ�
void DeleteListRand(int a)
{
	//�����ж�����������ڵ�
	struct Node* temp =FindNode(a);
	//�����ж� �ǲ���û�ж���
	if(NULL==head)
	{
	printf("����û����\n");
	return;
	}
	if(NULL==temp)
	{
	printf("���޴˵�\n");
	return;
	}
	//�ҵ���,��ֻ��һ���ڵ�
	if(head==end)
	{
	free(head);
	head=NULL;
	end=NULL;
	}
	else if (head->next==end) //�������ڵ�
	{
	//����ɾ��ͷ����ɾ��β
	if(end==temp)
		{	DeleteListTail(); }
	else if(temp==head)
		{	DeleteListHead(); }	

	}
	else//����ڵ�
	{
		//����ɾ��ͷ����ɾ��β
		if(end==temp)
			DeleteListTail();
		else if(temp==head)
			DeleteListHead();	
		else
		{	//��Ҫɾ��tempǰһ��
			struct Node*pt =head;
			while(pt->next!=temp)
			{
			pt=pt->next;
			}
			//�ҵ���
			//��ǰһ��ֱ�����Ӻ�һ�� ����ָ���ļ���
			 pt->next=temp->next;
			 free(temp);
		
		}
	}
	

}
void main ()
{	
	struct Node *pFind ;
	int i;
	//����5���ڵ�
	for(i=0;i<6;i++)
	AddListTill(i);
	
//	AddListRand(4,14);
//	DeleteListTail();	//ɾ��һ��β��
	DeleteListRand(4);
	ScanList();
	FreeList();
/*	pFind = FindNode(5);

	if (pFind !=  NULL)
	{
		printf("�ҵ�%d\n",pFind->a);
	}
	else
	{
		printf("No Find!\n");
	}

*/

}