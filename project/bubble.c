/********************************************************************
	����:	2019/01/28
	ʱ��:	   16:39
	�ļ���: 	F:\CPROJECT\PROJECT\bubble.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	ð������
*********************************************************************/
#include "stdio.h"

void bubble(int a[],int n)
{
	int i,temp;
	for (i=0;i<n;i++)
	{
		if (a[i]>a[i+1])
		{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
		}
	
	}

}

void BubbleSort(int a[],int n)
{
	int i;
	for (i=n;i>=1;i--)
	{
		bubble(a,n);
	}

}
	main()
{
		int arr[]={6,9,4,7,8,3,5,6,2};
		int i;
		BubbleSort(arr,9);
		for (i=0;i<9;i++)
		{
			printf("%d\n",arr[i]);
		}
}