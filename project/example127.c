/********************************************************************
	日期:	2019/01/28
	时间:	   15:14
	文件名: 	F:\CPROJECT\PROJECT\example127.c
	格式:	c
	作者:	$ kilotwo $
	目的:	计算某日是该年的第几天
*********************************************************************/
#include "stdio.h"

int leap(int year)		//判断闰年的函数
{
	if (year%4==0&&year/100!=0||year%400==0)
	{
		return 1;
	}
	return 0;
}
void main()
{
	int year=0, month=0, day=0;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};	//平年
	int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};	//闰年
	int total=0,i=0;
	printf("please input year \n");
	scanf("%d",&year);
	printf("please input month \n");
	scanf("%d",&month);
	printf("please input day \n");
	scanf("%d",&day);
	if (leap(year))//闰年用b[]
	{
	if(month>1)
	{	for (i==0;i<month;i++)
		total+=b[i];
	}
	total+=day;
	}else	//平年用a[]
	{
	if(month>1)
	{	for (i=0;i<month-1;i++)
		total+=a[i];
	}
		total+=day;
	}
	printf("%2d 年 %2d 月 %2d 日\n",year,month,day);
	printf("the  day is %2d\n",total);
}