/********************************************************************
	����:	2019/01/23
	ʱ��:	   16:56
	�ļ���: 	F:\CPROJECT\PROJECT\example21.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	ͳ�Ƹ����ַ�����
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