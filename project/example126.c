/********************************************************************
	日期:	2019/01/28
	时间:	   14:51
	文件名: 	F:\CPROJECT\PROJECT\example126.c
	格式:	c
	作者:	$ kilotwo $
	目的:	126.求各位上和为5的数100-10000
*********************************************************************/
#include "stdio.h"
main()
{
	int i,n=0,count=0,flag=0;
	for (i=100;i<=500;i++)
	{
		if(i/100+i/10%10+i%10 == 5)
		{	
			printf("%2d  ",i);
			count++;
			if (count%5==0)
			{
				printf("\n");
			}
		}
	}
	for (n=1000;n<=5000;n++)
	{
		if(n/1000+n/100%10+n/10%10+n%10 == 5)
		{	
			printf("%2d  ",n);
			flag++;
			if (flag%5==0)
			{
				printf("\n");
			}
		}
	}
	printf("Total is %2d \n",count+flag);
}