/********************************************************************
	����:	2019/01/28
	ʱ��:	   16:55
	�ļ���: 	F:\CPROJECT\PROJECT\selection.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	ѡ������
*********************************************************************/
#include "stdio.h"

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
}