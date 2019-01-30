/********************************************************************
	日期:	2019/01/28
	时间:	   16:55
	文件名: 	F:\CPROJECT\PROJECT\selection.c
	格式:	c
	作者:	$ kilotwo $
	目的:	选择排序
*********************************************************************/
#include "stdio.h"
/*
int FindMax(int a[],int n)
{
	int max,i,pos;
	max=a[0];
	for (i=0;i<n;i++)
	{
	if (a[i]>max)
	{
		max=a[i];
		pos=i;
	}
	}
	return pos;
}
void SelectionSort(int a[],int n)
{	
	while (n>1)
		{
	int	pos    = FindMax(a,n);
	int	temp   = a[pos];
		a[pos] = a[n-1];
		a[n-1]   = temp;
		n--;
		}
}
void main()
{
	int i,j;
	int arr[]={1,5,4,3,7,9,5,3,2};
//	SelectionSort(arr,9);
	int temp,pos;
	for (i=8;i>0;i--)
	for (j=i;j>0;j--)
	{
		pos=FindMax(arr,j+1);
		temp=arr[pos];
		arr[pos]=arr[j];
		arr[j]=temp;
	}
	for (i=0;i<9;i++)
	{
		printf("%d\n",arr[i]);
	}
}*/
void main()
{
	int a[5]={2,3,6,4,1};
	int i,j,temp,n;
	n=5;
	
	for (i=0;i<n-1;i++)
		for (j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	for (i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}