/********************************************************************
	����:	2019/01/28
	ʱ��:	   17:52
	�ļ���: 	F:\CPROJECT\PROJECT\InsertSort.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	��������
*********************************************************************/
#include "stdio.h"
void insert(int arr[],int n)		//���뺯��
{
	int key = arr[n];
	int i=n;
	while (arr[i-1]>key)
	{
		arr[i]=arr[i-1];
		i--;
		if(i==0)
			break;
	}
	arr[i] = key;

}
void main()
{
	int arr[]={3,5,6,7,2,9,4,3,1};
	int i,j;
	for (i=1;i<9;i++)
	{
	insert(arr,i);
	}

	for (j=0;j<9;j++)
	{
		printf("%2d,",arr[j]);
	}

}
