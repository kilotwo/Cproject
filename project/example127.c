/********************************************************************
	����:	2019/01/28
	ʱ��:	   15:14
	�ļ���: 	F:\CPROJECT\PROJECT\example127.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	����ĳ���Ǹ���ĵڼ���
*********************************************************************/
#include "stdio.h"

int leap(int year)		//�ж�����ĺ���
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
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};	//ƽ��
	int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};	//����
	int total=0,i=0;
	printf("please input year \n");
	scanf("%d",&year);
	printf("please input month \n");
	scanf("%d",&month);
	printf("please input day \n");
	scanf("%d",&day);
	if (leap(year))//������b[]
	{
	if(month>1)
	{	for (i==0;i<month;i++)
		total+=b[i];
	}
	total+=day;
	}else	//ƽ����a[]
	{
	if(month>1)
	{	for (i=0;i<month-1;i++)
		total+=a[i];
	}
		total+=day;
	}
	printf("%2d �� %2d �� %2d ��\n",year,month,day);
	printf("the  day is %2d\n",total);
}