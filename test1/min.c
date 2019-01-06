//比较二维数组每行最小元素再求和

#include <stdio.h>
#define N 4				//N是列
void min(int (*a)[N],int n);

main(){
				int a[3][N]={22,33,44,44,55,66,77,33,45,555,444,666};
				min(a,3);
		


}


void min(int (*a)[N],int m)		//m是行
{
	int i,j;
	int min=0,sum=0;
		for(i=0;i<m;i++)
		{	for(j=0;j<N;j++)
			{
				min=*(*(a+i)) ;//temp为每行第一个
				if(min>*(*(a+i)+j))
							min=*(*(a+i)+j);
			}
	printf("第%d行最小数是%d\n",i+1,min);
		}
}