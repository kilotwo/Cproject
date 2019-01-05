#include <stdio.h>

	main()
{
		int i,j;
		int a[10]={22,33,54,1,45,56,323,123,213,32};
		int temp;
		for(i=0;i<10;i++)			//i只决定次数
		{
		for(j=0;j<9-i;j++)
		{										//索引还是看j
			if( a[j]>a[j+1] )			//沉底法把大的丢到最后把小的让到前面
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}								//外10内10次共n^2次
		}
		for(i=0;i<10;i++)		
			printf("%d,",a[i]);		
}



		