/********************************************************************
	����:	2019/01/28
	ʱ��:	   21:32
	�ļ���: 	F:\CPROJECT\PROJECT\exmple141.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	��˳�˹���� �Ȳ����� a1=a^2-a+1 ����a�� ������2 ȫ������ S=a������
*********************************************************************/
#include "stdio.h"

main()
{
	int n,x;
	int i,j=0;
	int sum=0,temp=0;
	printf("please input a num \n");
	scanf("%d",&n);
	sum = n*n*n; //23*23*23
	temp=n*n-n+1;
	j=temp;
	do 
	{
		printf("%d+",j);
		j+=2;
		temp+=j;
	} while (temp != sum);
	printf("\n n�����η� is %d\n",sum);
	//printf("�������%d \n",temp);
	
}