/********************************************************************
	日期:	2019/01/29
	时间:	   21:37
	文件名: 	F:\CPROJECT\PROJECT\example157.c
	格式:	c
	作者:	$ kilotwo $
	目的:	abcd = (ab+cd)^2
*********************************************************************/
void main()
{
	int i,a,b,c,d;
	for (i=1000;i<10000;i++)
	{
		a=i/1000;
		b=i/100%10;
		c=i/10%10;
		d=i%10;
		if (i == (a*10+b+c*10+d)*(a*10+b+c*10+d) )
		{
			printf("%d ",i);
		}
	}

}