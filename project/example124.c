/********************************************************************
	����:	2019/01/28
	ʱ��:	   14:10
	�ļ���: 	F:\CPROJECT\example124.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	ż�����
*********************************************************************/
#include "stdio.h"
#include "math.h"
int isPrime(int n);	//�ж��Ƿ�������
	main()
{
		int n,i; 
		scanf("%d", &n);
		if (n % 2 != 0) 
			printf("Input an  right num!");
		else { 
			for (i = 1; i <= n; i++) 
			{	 
			if (isPrime(i) && isPrime(n - i)) 
			printf("%2d+%2d\n", i, n - i); 
			continue;
			}
			
		} 
		return 0;


}
int isPrime(int n)	
{
	int i=0;
	for (i=2;i<=(int)sqrt(n);i++)		//�˴���ע��
	{
		if (n%i==0&n!=2)
		{
			return 0;
		}
	}
	return 1;
}