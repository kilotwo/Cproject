/********************************************************************
	日期:	2019/01/24
	时间:	   15:45
	文件名: 	F:\CPROJECT\PROJECT\example82.c
	格式:	c
	作者:	$ kilotwo $
	目的:	结构体练习
*********************************************************************/
#include "stdio.h"

struct student
{
	int num;
	char name[20];
	float score;
};
void main()
{
	int max;
	int i,m=0;
	struct student stu[5]=
	{
		{1,"apple",33},
		{2,"pear",55},
		{3,"ads",66},
		{4,"sdfdsf",77},
		{5,"sdfgerr",88}
	};
	max=stu[0].num;

	for(i=0;i<5;i++)
	{
		if (stu[i].score>max)
		{
			max=stu[i].score;
			m=i;
		}
	}
	printf("the max score is %f\n the number is %d \n the nume is %s \n",stu[m].score,stu[m].num,stu[m].name);
}



