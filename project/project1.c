/********************************************************************
	日期:	2019/01/14
	时间:	   20:51
	文件名: F:\CPROJECT\PROJECT1\project1.c
	格式:	c
	作者:	$ kilotwo $
	目的:	example2	//十进制转二进制
*********************************************************************/
#include "stdio.h"
	main()
	{
			int i,j,n,m;
			int a[16]={0};
			printf("please input a dec number\n");
			scanf("%d",&n);
			for (m=0;m<16;m++)
			{
				i=n/2;
				j=n%2;
				n=i;
				a[m]=j;
			}
			for (m=15;m>=0;m--)
			{
				printf("%d",a[m]);
				if(m%4==0)
					printf(" ");
			}

	}
