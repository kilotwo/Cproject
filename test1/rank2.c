#include <stdio.h>

	main()
{
		int i,j;
		int a[10]={22,33,54,1,45,56,323,123,213,32};
		int temp;
		for(i=0;i<10;i++)			//iֻ��������
		{
		for(j=0;j<9-i;j++)
		{										//�������ǿ�j
			if( a[j]>a[j+1] )			//���׷��Ѵ�Ķ�������С���õ�ǰ��
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}								//��10��10�ι�n^2��
		}
		for(i=0;i<10;i++)		
			printf("%d,",a[i]);		
}



		