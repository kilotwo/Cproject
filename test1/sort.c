#include <stdio.h>
#include <string.h>
 void sort(char *strings[],int n);

	main(){
		int n=6;
		int i=0;
		char *month[]=				//一堆指针数组
		{
				"January",
				"February",
				"March",
				"April",
				"May",
				"June"
		};
		sort(month,n);
		for(i=0;i<n;i++)
			printf("%s\n",month[i]);

	}
	void sort(char *strings[],int n)
	{
			int i,j;
			char* temp;
			for(i=0;i<n;i++)			//选择排序
					for(j=i+1;j<n;j++)
			{
				if( strcmp(strings[i],strings[j])>0)
				{
					temp=strings[i];
					strings[i]=strings[j];
					strings[j]=temp;
				}
			}
			
	}