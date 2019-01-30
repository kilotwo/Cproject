/********************************************************************
	日期:	2019/01/30
	时间:	   21:16
	文件名: 	F:\CPROJECT\PROJECT\test.c
	格式:	c
	作者:	$ kilotwo $
	目的:	小测试
*********************************************************************/

#include "stdio.h"
#include "ctype.h"
main()
{
	double i,j,k,number;
	char c ;
	char string1[50],string2[50];
	char* str;
	int pos;
	char ch1,ch2;
	printf("please input the string\n");
	gets(string1);
	printf("please input the character\n");
	ch1=getchar();
	getchar();
	if (isalpha(ch1))
	{
		printf(" a char ");
		if (ch1 == 'q')
		{
			printf("break");
		}
	}else
		printf("not a char ");
		
	
//	gets(string2);



//	pos=strspn(string1,string2);
//	if (pos)
//	{
//	printf("%d",pos);
//	}
//  strlwr(string);	//大写转小写
//	str=string;	//指向那一块
//	printf("%s\n",str);
//	printf("please input the character you want find\n");
//	scanf("%c",&c);
//	str=strchr(string,c);
//	j=modf(number,&i);
//	printf("%lf = %lf + %lf ",number,i,j);
//	printf("pos is %d\n",str - string);
//	printf("rest is %s ",str);
}