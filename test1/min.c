//�Ƚ϶�ά����ÿ����СԪ�������

#include <stdio.h>
#define N 4				//N����
void min(int (*a)[N],int n);

main(){
				int a[3][N]={22,33,44,44,55,66,77,33,45,555,444,666};
				min(a,3);
		


}


void min(int (*a)[N],int m)		//m����
{
	int i,j;
	int min=0,sum=0;
		for(i=0;i<m;i++)
		{	for(j=0;j<N;j++)
			{
				min=*(*(a+i)) ;//tempΪÿ�е�һ��
				if(min>*(*(a+i)+j))
							min=*(*(a+i)+j);
			}
	printf("��%d����С����%d\n",i+1,min);
		}
}