#include "stdio.h"
	main()
	{
	int i,j=0;
	int a[11][11];
	printf("ÕâÊÇÑî»ÔÈı½Ç\n");
	for (i=1;i<11;i++)
{
		a[i][1]=1;
		a[i][i]=1;

	 if (i<=2)
		{
			for (j=1;j<=i;j++)
			{
				printf("%d ",a[i][j]);
			}
		
	 }	else if (i>2)
	 {
		 for (j=1;j<=i;j++)
		 {
			 if (j>1&&j<i)
			 {
					a[i][j]=a[i-1][j]+a[i-1][j-1];
			 }
			 printf("%d  ",a[i][j]);
		 }
	}
	
	printf("\n");
}

	}