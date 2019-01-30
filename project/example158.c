/********************************************************************
	日期:	2019/01/29
	时间:	   21:47
	文件名: 	F:\CPROJECT\PROJECT\example158.c
	格式:	c
	作者:	$ kilotwo $
	目的:	神奇的6174
*********************************************************************/
#include "stdio.h"
void sort1(int arr[],int n)//从小到大
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
void sort2(int arr[],int n)//从大到小
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
	sort2(a,4);//从大到小
	max=a[0]*1000+a[1]*100+a[2]*10+a[3];
	sort1(a,4);//从小到大
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