/********************************************************************
	日期:	2019/02/22
	时间:	   23:03
	文件名: 	F:\CPROJECT\FUSHIZHENTI\2015-3.c
	格式:	c
	作者:	$ kilotwo $
	目的:	2015-3			只对奇数序号数递增排序，偶数序号不变
*********************************************************************/
#include "stdio.h"
void selectSort(int a[],int n);
int main()
{
	//对1,3,5,7,9,11,13排序
	int a[15]={ 9,9,8,8,7,7,6,6,5,5,4,4,3,3,2 };
	int i,j,temp;
	selectSort(a,15);
	for (i=0;i<15;i++)
	{
		printf("%d ",a[i]);
	}
}
void selectSort(int a[],int n)//选择排序就是要先选择出来最小的
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
