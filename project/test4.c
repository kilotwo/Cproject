/********************************************************************
	����:	2019/01/15
	ʱ��:	   21:59
	�ļ���: 	F:\CPROJECT\PROJECT1\test4.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	2����תip��ַ
*********************************************************************/
#include "stdio.h"
# include <stdlib.h>
#include "math.h"
#include "string.h"
int bin2dec(int x);

	main()
{
	long n,n1,n2,n3,n4,i=0;
	char c[33]={0};
	char ip1[8]={0};
	char ip2[8]={0};
	char ip3[8]={0};
	char ip4[8]={0};
		printf("please input bin num\n");
		scanf("%s",&c);
	//	printf("input bin num is %d \n",atoi(c));
		strncpy(ip1,c,8);
	//	printf("%s",ip1);
		strncpy(ip2,c+8,8);
		strncpy(ip3,c+16,8);
		strncpy(ip4,c+24,8);
		
		printf("input bin num is %d \n",ip1);
		
}
int bin2dec(int n)	//������תʮ����
{
int decNum= 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decNum += remainder*pow(2,i);
        ++i;
    }
    return decNum;
}