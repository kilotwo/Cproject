#include<stdio.h>
	main()
	{ 
		int i=0;
		int word=1;
	char array[100];
	gets(array);

	for(i=0;array[i]!='\0';i++)
	{
		if(array[i]==' ')
		word++;
	}
	printf("%d \n",word);

	}