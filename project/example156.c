/********************************************************************
	日期:	2019/01/29
	时间:	   13:47
	文件名: 	F:\CPROJECT\PROJECT\example156.c
	格式:	c
	作者:	$ kilotwo $
	目的:	自守数
格式字符串应该写成%I64d以输出long long类型的整数。
	
③VisualC++6.0 环境运行下，将long long 用 _int64 进行替换
因为 VC6中所使用的编译器是C90标准的，而 long long 型是在C99中新加入的

  （longlong int双长整型是C 99扩充的数据类型，同时扩充的还有float_complex，double_complex，long
  
	long_complex，bool等），故无法实现编译。
*********************************************************************/
#include "stdio.h"

void main()
{
	__int64 i,n;
	__int64 p=90625;
	for (i=1;i<100000;i++)
	{
		if (i<=10)
		{
			if (i*i==i%10)
			{
				printf("%I64d ",i);
			}
			
		}
		else if (i<=99&&i>10)
		{
			if (i*i%100==i)
			{	
				printf("%I64d ",i);
			}
			
		}else if (i>=100&&i<=999)
		{	
			if (i==i*i%1000)
		{	
			printf("%I64d ",i);
			}

		}else if (i>=1000&&i<=9999)
		{
			if (i==i*i%10000)
			{	
				printf("%I64d ",i);
			}


		}else if (i>10000&&i<=99999)
		{
			if (i==i*i%100000)
			{	
				printf("%I64d ",i);
			}
		}

	}

}