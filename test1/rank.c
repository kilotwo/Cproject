#include <stdio.h>
main(){

	int i,j;
	int min,temp;
	int a[10];
	printf("please input 10 number\n");
	//从键盘为数组元素赋值
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}

	for(i=0;i<9;i++)
	{
		temp=a[i];							//假设第i元素为最小值
		min=i;								//记录最小值索引
		for(j=i+1;j<10;j++)			//从i之后开始循环找最小值		
		{
			if(a[j]<a[min])				//如果当前值比默认值小
			{	
				temp=a[j];				//记录当前最小值
				min=j;						//记录最小值索引
			}
		}
			a[min]=a[i];				//交换两个数
			a[i]=temp;

	}
		for(i=0;i<10;i++)					//输出数组
			printf("%d.",a[i]);
		printf("\n");
}








