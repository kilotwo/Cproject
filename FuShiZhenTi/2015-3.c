/********************************************************************
	����:	2019/02/22
	ʱ��:	   23:03
	�ļ���: 	F:\CPROJECT\FUSHIZHENTI\2015-3.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	2015-3			ֻ�������������������ż����Ų���
*********************************************************************/
#include "stdio.h"
void selectSort(int a[],int n);
int main()
{
	//��1,3,5,7,9,11,13����
	int a[15]={ 9,9,8,8,7,7,6,6,5,5,4,4,3,3,2 };
	int i,j,temp;
	selectSort(a,15);
	for (i=0;i<15;i++)
	{
		printf("%d ",a[i]);
	}
}
void selectSort(int a[],int n)//ѡ���������Ҫ��ѡ�������С��
{
	int i,j;
	int min,temp;
	for (i=0;i<10;i+=2)
	{
		min =i;
		for (j=i+1;j<n;j+=2)
		{
			if (a[j]<a[min])
			{
				min =j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	
}
