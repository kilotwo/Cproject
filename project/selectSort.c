/********************************************************************
	日期:	2019/02/20
	时间:	   11:51
	文件名: 	F:\CPROJECT\PROJECT\selectSort.c
	格式:	c
	作者:	$ kilotwo $
	目的:	选择排序
*********************************************************************/
#include "stdio.h"

void selectSort(int a[],int n);
void main()
{
	int i=0;
	int a[]={0,2,3,1,4,8,6,7,5,9};
		selectSort(a,10);
		for (i=0;i<10;i++)
		{
			printf("%d ",a[i]);
		}
}
void selectSort(int a[],int n)//选择排序就是要先选择出来最小的
{
	int i,j;
	int min,temp;
	for (i=0;i<10;i++)
	{
		min =i;
		for (j=i+1;j<n;j++)
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