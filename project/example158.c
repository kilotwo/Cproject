/********************************************************************
	����:	2019/01/29
	ʱ��:	   21:47
	�ļ���: 	F:\CPROJECT\PROJECT\example158.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	�����6174
*********************************************************************/
#include "stdio.h"
void sort1(int arr[],int n)//��С����
{
	int i,j,temp;
	for (i=0;i<n-1;i++)
		for (j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
}
void sort2(int arr[],int n)//�Ӵ�С
{
	int i,j,temp;
	for (i=0;i<n-1;i++)
		for (j=i+1;j<n;j++)
		{
			if(arr[j]>arr[i])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
}

main()
{
	int n;
	int a[4];
	int max,min,temp;
	printf("please input a 4 num \n");
	scanf("%d",&n);
	a[0]=n/1000;
	a[1]=n/100%10;
	a[2]=n/10%10;
	a[3]=n%10;
	do 
	{
	sort2(a,4);//�Ӵ�С
	max=a[0]*1000+a[1]*100+a[2]*10+a[3];
	sort1(a,4);//��С����
	min=a[0]*1000+a[1]*100+a[2]*10+a[3];
	printf("%d - %d = %d \n",max,min,max-min);
	n=max-min;
	a[0]=n/1000;
	a[1]=n/100%10;
	a[2]=n/10%10;
	a[3]=n%10;
	} while (n!=6174);
//	printf("%d",min);

}