/********************************************************************
	日期:	2019/01/28
	时间:	   21:32
	文件名: 	F:\CPROJECT\PROJECT\exmple141.c
	格式:	c
	作者:	$ kilotwo $
	目的:	尼克彻斯定理 等差数列 a1=a^2-a+1 共有a项 公差是2 全奇数项 S=a的立方
*********************************************************************/
#include "stdio.h"

main()
{
	int n,x;
	int i,j=0;
	int sum=0,temp=0;
	printf("please input a num \n");
	scanf("%d",&n);
	sum = n*n*n; //23*23*23
	temp=n*n-n+1;
	j=temp;
	do 
	{
		printf("%d+",j);
		j+=2;
		temp+=j;
	} while (temp != sum);
	printf("\n n的三次方 is %d\n",sum);
	//printf("求出来的%d \n",temp);
	
}