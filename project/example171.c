/********************************************************************
	日期:	2019/01/30
	时间:	   12:30
	文件名: 	F:\CPROJECT\PROJECT\example171.c
	格式:	c
	作者:	$ kilotwo $
	目的:	矩阵的乘法运算 2x3 * 3x2 
*********************************************************************/
#include "stdio.h"
main()
{
	int a[2][3];
	int b[3][2];
	int c[2][2];
	int i,j,k,l;
	int sum=0;
	printf("please input a martrix \n");
	for (i=0;i<=1;i++)
		for (j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
		for (i=0;i<=1;i++)
		{	for (j=0;j<=2;j++)
			{
				printf("%d ",a[i][j]);
			}
		printf("\n");
		}
	printf("please input a martrix \n");
	for (i=0;i<=2;i++)
		for (j=0;j<=1;j++)
		{
			scanf("%d",&b[i][j]);
		}
		for (i=0;i<=2;i++)
		{	for (j=0;j<=1;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
		}
	for (k=0;k<=1;k++)		//k是行
		for (l=0;l<=1;l++)	//l是列
		{
			sum=0;
			for (j=0;j<=2;j++)
			{
				sum+=a[k][j]*b[j][l];	
			}
			c[k][l]=sum;
			
		}

		for (k=0;k<2;k++)		//k是行
		{	for (l=0;l<2;l++)	//l是列
			{	
			printf("%d ",c[k][l]);
			}	
			printf("\n");
		}	




}