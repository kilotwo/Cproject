/********************************************************************
	日期:	2019/01/28
	时间:	   20:25
	文件名: 	F:\CPROJECT\PROJECT\example139.c
	格式:	c
	作者:	$ kilotwo $
	目的:	角古猜想
*********************************************************************/
#include "stdio.h"

main()
{

	int n;
	printf("please input a num\n");
	scanf("%d",&n);
	while(n!=1)
	{
		if(n%2==0)		//偶数
		{
		n=n/2;
		}else	//	奇数
		{
		n=n*3+1;
		}
			printf("%d\n",n);
	}
	printf("%d\n",n);
}
