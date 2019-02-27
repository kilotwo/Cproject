/********************************************************************
	日期:	2019/02/22
	时间:	   20:49
	文件名: 	F:\CPROJECT\FUSHIZHENTI\2015-2.c
	格式:	c
	作者:	$ kilotwo $
	目的:	2015-2
*********************************************************************/
#include "stdio.h"
#include "string.h"

void main()
{
	char c[20]="abcd123cd56##01";
	int a[10]={0};
	int sum=0;
	int flag=0,i;
	int j=0;
	int n;
	for (i=0;c[i] !='\0' ;i++)
	{
			if (flag == 0)		//之前未发现数字
		{
				if (c[i]>='0'&&c[i]<='9')		//下一个是数字
			{		
				flag =1 ;								//发现数字
				a[j]= a[j]+(c[i] - '0');
			}										//下一个不是数字
				
		}else if (flag == 1)			//之前有数字
			{
				if (c[i]>='0'&&c[i]<='9')		//下一个还是数字
				{
					a[j] = 10* a[j]+(c[i] - '0');
				}
				else 
				{										//下一个不是数字
					j++;							//准备放入下一个元素中
					flag = 0;					//清空标志
				}
	}

	}
for (i=0;i<=j;i++)
{
		if (i<j)
		{
		printf("%d + ",a[i]);
		sum+=a[i];
		}else if (i==j)
		{
			sum+=a[i];
		printf("%d = %d",a[j],sum);
		}
}

}