/********************************************************************
	����:	2019/01/29
	ʱ��:	   13:47
	�ļ���: 	F:\CPROJECT\PROJECT\example156.c
	��ʽ:	c
	����:	$ kilotwo $
	Ŀ��:	������
��ʽ�ַ���Ӧ��д��%I64d�����long long���͵�������
	
��VisualC++6.0 ���������£���long long �� _int64 �����滻
��Ϊ VC6����ʹ�õı�������C90��׼�ģ��� long long ������C99���¼����

  ��longlong int˫��������C 99������������ͣ�ͬʱ����Ļ���float_complex��double_complex��long
  
	long_complex��bool�ȣ������޷�ʵ�ֱ��롣
*********************************************************************/
#include "stdio.h"

void main()
{
	__int64 i,n;
	__int64 p=90625;
	for (i=1;i<100000;i++)
	{
		if (i<=10)
		{
			if (i*i==i%10)
			{
				printf("%I64d ",i);
			}
			
		}
		else if (i<=99&&i>10)
		{
			if (i*i%100==i)
			{	
				printf("%I64d ",i);
			}
			
		}else if (i>=100&&i<=999)
		{	
			if (i==i*i%1000)
		{	
			printf("%I64d ",i);
			}

		}else if (i>=1000&&i<=9999)
		{
			if (i==i*i%10000)
			{	
				printf("%I64d ",i);
			}


		}else if (i>10000&&i<=99999)
		{
			if (i==i*i%100000)
			{	
				printf("%I64d ",i);
			}
		}

	}

}