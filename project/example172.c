/********************************************************************
	日期:	2019/01/30
	时间:	   20:26
	文件名: 	F:\CPROJECT\PROJECT\example172.c
	格式:	c
	作者:	$ kilotwo $
	目的:	打印n阶螺旋方阵
*********************************************************************/
#include "stdio.h"

main()
{
	int i,j,k=0,a[10][10],mid,n;
	printf("please input n \n");
	scanf("%d",&n);
	if (n%2==0)
	{
		mid=n/2;

	}else
		mid=n/2+1;

	for (i=0;i<mid;i++)
	{
		for (j=i;j<n-i;j++)		//上
		{
			k++;
			a[i][j]=k;
		}
		for (j=i+1;j<n-i;j++)		//右
		{
		
			k++;
			a[j][n-1-i]=k;		
		}
		for (j=n-2-i;j>=i;j--)//下
		{
			k++;
			a[n-i-1][j]=k;
		}
		for (j=n-2-i;j>=i+1;j--)
		{
		k++;
		a[j][i]=k;
		}
	}
		
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}






}