/********************************************************************
	日期:	2019/01/23
	时间:	   16:56
	文件名: 	F:\CPROJECT\PROJECT\example21.c
	格式:	c
	作者:	$ kilotwo $
	目的:	统计各种字符个数
*********************************************************************/
#include "stdio.h"
	main()
	{
	char c;
	int word = 0,num =0,space =0,other=0;
	printf("please input some char \n");
	while ((c=getchar())!='\n')
	{
		if (c>='a'&&c<='z'||c>='A'&&c<='Z')
		{
			word++;
		}else if (c>='0'&&c<='9')
		{
			num++;
		}else if(c==' ')
		{
			space++;
		}else
			other++;
	}
	printf("word = %2d ,num = %2d,space = %2d ,other=%2d\n",word,num,space,space);
	}