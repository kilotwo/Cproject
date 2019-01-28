/********************************************************************
	日期:	2019/01/28
	时间:	   16:39
	文件名: 	F:\CPROJECT\PROJECT\bubble.c
	格式:	c
	作者:	$ kilotwo $
	目的:	冒泡排序
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