/********************************************************************
	日期:	2019/01/25
	时间:	   16:58
	文件名: 	F:\CPROJECT\PROJECT\l2.c
	格式:	c
	作者:	$ kilotwo $
	目的:	链表练习 无空投增删改查
			//队列 头添加 尾删除	
*********************************************************************/
#include "stdio.h"
#include "stdlib.h"

//1.节点结构体		
struct Node
{
	int a;				//数据域
	struct Node* next;	//指针域(指向节点的指针）
};
//2.全局定义链表头尾指针
struct Node* head= NULL;
struct Node* end = NULL;
//3.创建链表,实现在链表中增加一个数据,尾添加
void AddListTill(int a )
{
		//创建一个节点
		struct Node* temp=(struct Node*)malloc(sizeof(struct Node));		//此处注意强转

		//节点数据进行赋值
		temp->a=a;
		temp->next=NULL;		
		
		//连接分两种情况1.一个节点都没有2.已经有节点了，添加到尾巴上
		if(NULL==head)
		{	

			head=temp;
		//	end=temp;
		}
		else
		{
		end->next=temp;
	//	end=temp;			//尾结点应该始终指向最后一个
		}
		end=temp;			//尾结点应该始终指向最后一个
}

//4.遍历链表 查 / 查指定的
void ScanList()
{
	struct Node *temp =head;		//定义一个临时变量来指向头
	while (temp !=NULL)
	{
		printf("%d\n",temp->a);
		temp = temp->next;		//temp指向下一个的地址 即实现++操作
	}

}
//5.查询指定的节点 遍历 一个个找
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
	//没找到
		return NULL;
} 
//6.链表清空 全部删除
void FreeList()
{
	//一个一个NULL
	struct Node *temp =head;		//定义一个临时变量来指向头
	while (temp !=NULL)
	{
	//	printf("%d\n",temp->a);
		struct Node* pt =temp;
		temp = temp->next;		//temp指向下一个的地址 即实现++操作
		free(pt);					//释放当前
	}
	//头尾清空	不然下次的头就接着0x10
	head =NULL;
	end =NULL;
}
//7.在指定位置插入节点
void AddListRand(int index,int a)
{	
	struct Node* pt =FindNode(index);
	//有此节点
	//给a 创建节点
	struct Node* temp =(struct Node *)malloc(sizeof(struct Node));
	if (NULL==head)
	{
		printf("链表没有节点\n");
		return;
	}
	
	if(NULL==pt)
	{
		printf("没有指定节点\n");
		return;
	}

	//节点成员进行赋值
	temp->a=a;
	temp->next=NULL;
	//连接到链表上 1.找到的节点在尾部 2.找到的节点在中间 
	if (pt == end)
	{
		//尾巴的下一个指向新插入的节点
	end->next=temp;
	//新的尾巴
	end=temp;
	}else
	{
		// 先连后面 （先将要插入的节点指针指向原来找到节点的下一个）
	temp->next=pt->next;
		//后连前面
	pt->next=temp;
	}


}
//8.尾删除
void DeleteListTail()
{ 
	if (NULL == end)
	{
		printf("链表为空，无需删除\n");
		return;
	}
	//链表不为空 
	//链表有一个节点
	 if (head==end)
	 {
		 free(head);
		 head=NULL;
		 end=NULL; 
	 }
	 else
	 {
		//找到尾巴前一个节点
		 struct Node* temp =head;
		 while (temp->next!=end)
		 {
			 temp = temp->next;
		 }
		 //找到了，删尾巴
		//释放尾巴
		 free(end);
		 //尾巴迁移
		 end=temp;
		 //尾巴指针为NULL
		 end->next=NULL;
	 }

}
//9.删除头
void DeleteListHead()
{	//记住旧头
	struct Node* temp=head;
	//链表检测 
	if (NULL==head)
	{
			printf("链表为空\n");
			return;
	}

	head=head->next;//头的第二个节点变成新的头
	free(temp);

}
//10.删除指定节点
void DeleteListRand(int a)
{
	//链表有东西，找这个节点
	struct Node* temp =FindNode(a);
	//链表判断 是不是没有东西
	if(NULL==head)
	{
	printf("链表没东西\n");
	return;
	}
	if(NULL==temp)
	{
	printf("查无此点\n");
	return;
	}
	//找到了,且只有一个节点
	if(head==end)
	{
	free(head);
	head=NULL;
	end=NULL;
	}
	else if (head->next==end) //有两个节点
	{
	//看是删除头还是删除尾
	if(end==temp)
		{	DeleteListTail(); }
	else if(temp==head)
		{	DeleteListHead(); }	

	}
	else//多个节点
	{
		//看是删除头还是删除尾
		if(end==temp)
			DeleteListTail();
		else if(temp==head)
			DeleteListHead();	
		else
		{	//找要删除temp前一个
			struct Node*pt =head;
			while(pt->next!=temp)
			{
			pt=pt->next;
			}
			//找到了
			//让前一个直接连接后一个 跳过指定的即可
			 pt->next=temp->next;
			 free(temp);
		
		}
	}
	

}
void main ()
{	
	struct Node *pFind ;
	int i;
	//创建5个节点
	for(i=0;i<6;i++)
	AddListTill(i);
	
//	AddListRand(4,14);
//	DeleteListTail();	//删除一个尾巴
	DeleteListRand(4);
	ScanList();
	FreeList();
/*	pFind = FindNode(5);

	if (pFind !=  NULL)
	{
		printf("找到%d\n",pFind->a);
	}
	else
	{
		printf("No Find!\n");
	}

*/

}