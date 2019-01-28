/********************************************************************
	日期:	2019/01/28
	时间:	   14:10
	文件名: 	F:\CPROJECT\example124.c
	格式:	c
	作者:	$ kilotwo $
	目的:	偶数拆分
*********************************************************************/
#include "stdio.h"
#include "math.h"
int isPrime(int n);	//判断是否是素数
	main()
{
		int n,i; 
		scanf("%d", &n);
		if (n % 2 != 0) 
			printf("Input an  right num!");
		else { 
			for (i = 1; i <= n; i++) 
			{	 
			if (isPrime(i) && isPrime(n - i)) 
			printf("%2d+%2d\n", i, n - i); 
			continue;
			}
			
		} 
		return 0;


}
int isPrime(int n)	
{
	int i=0;
	for (i=2;i<=(int)sqrt(n);i++)		//此处需注意
	{
		if (n%i==0&n!=2)
		{
			return 0;
		}
	}
	return 1;
}