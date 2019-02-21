/********************************************************************
	日期:	2019/02/20
	时间:	   12:09
	文件名: 	F:\CPROJECT\PROJECT\insertSort2.c
	格式:	c
	作者:	$ kilotwo $
	目的:	插入排序
*********************************************************************/
#include "stdio.h"
#include "algorithm"
using namespace std;
//void insertSort(int a[],int n);
bool cmp(int a,int )
{return a>b;}
void main()
{
	int i=0;
	int a[]={5,2,4,6,3,1};
	//insertSort(a,6);
	sort(a,a+5);
	for (i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
	
}

void insertSort(int a[],int n)
{
	int i,j;
	int temp;
	for (i=1;i<n;i++)//从第二个开始 默认第一个为有序数组
	{
		temp=a[i];
		for (j=i;j>0&&a[j-1]>temp;j--)
		{
			a[j]=a[j-1];
		}
		a[j]=temp;
	}

}

