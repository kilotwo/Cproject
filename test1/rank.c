#include <stdio.h>
main(){

	int i,j;
	int min,temp;
	int a[10];
	printf("please input 10 number\n");
	//�Ӽ���Ϊ����Ԫ�ظ�ֵ
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}

	for(i=0;i<9;i++)
	{
		temp=a[i];							//�����iԪ��Ϊ��Сֵ
		min=i;								//��¼��Сֵ����
		for(j=i+1;j<10;j++)			//��i֮��ʼѭ������Сֵ		
		{
			if(a[j]<a[min])				//�����ǰֵ��Ĭ��ֵС
			{	
				temp=a[j];				//��¼��ǰ��Сֵ
				min=j;						//��¼��Сֵ����
			}
		}
			a[min]=a[i];				//����������
			a[i]=temp;

	}
		for(i=0;i<10;i++)					//�������
			printf("%d.",a[i]);
		printf("\n");
}








