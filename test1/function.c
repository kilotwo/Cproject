/********************************************************************
	����:	2019/01/07
	ʱ��:	   23:41
	�ļ���: 	F:\Cproject\test1\function.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	
*********************************************************************/

#include <stdio.h>

void order(int *p,int n);

main ()
{
	/*	int a[3][3],i,j,(*p)[5];
		p=a;
		printf("please input :\n");
		for(i=0;i<3;i++)
			for(j=0;j<3;j++)
				scanf("%d",*(a+i)+j);

			printf("the second line is:\n");
			for(j=0;j<3;j++)
				printf("%d.",*(*(a+1)+j) );
*/
/*	char *str="hello";		//�ַ�ָ��
	char str1[]="hello nihao";	//�ַ�����
	char str2[30],*p1,*p2;
	p1=str1;
	p2=str2;
	while(*p1!='\0')
	{
		*p2=*p1;
		p1++;
		p2++;
	}
	*p2='\0';
	printf("Now the str2 is\n");
	puts(str2);
	puts(str);
	*/
	//ð��ָ�뷨
	int a[20],i,n;
	printf("please input num\n");
	scanf("%d",&n);
	printf("please input Ԫ��\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	order(a,n);


}




void order(int *p,int n)			//��������͸���
{
	int i,t,j;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(*(p+j)>*(p+j+1))
			{
				t=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=t;
			}
		printf("behind order");
		for(i=0;i<n;i++)
		{
			if(i%5==0)
				printf("\n");
			printf("%d",*(p+i));
		}
}

