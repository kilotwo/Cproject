#include "stdio.h"
main(){

	int i=0,a[10],b[10];
	for (i=0;i<10;i++)
	{
		printf("please input no.%d number",i+1);
		scanf("%d",&a[i]);
	}
	for (i=0;i<9;i++)
	{
		b[i]=a[i]+a[i+1];
	}
	for (i=0;i<9;i++)
	{	
		if(i>1&&i%3==0)
	printf("\n");
		printf("%5d ",b[i]);
	
	}
}
