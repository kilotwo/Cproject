/********************************************************************
	日期:	2019/02/20
	时间:	15:57
	文件名: F:\CPROJECT\bouble.c
	格式:	c
	作者:	$ kilotwo $
	目的:	冒泡排序
*********************************************************************/
#include "stdio.h"
void main()
{
int a[8]={3,2,5,8,4,7,9,5};
int i,j,temp;
for( i=0;i<8;i++)
{
	for( j=0;j<7-i;j++)			//沉底最后一个
	{
		if(a[j]>a[j+1])		
		{
			temp=a[j];	
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
for (i=0;i<8;i++)
{
	printf("%d ",a[i]);
}
}