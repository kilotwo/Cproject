#include<stdio.h>

	main()
	{
		char String[6]={"apple"};
		char reverse[6]={ 0 };
		int size,i;
		size =sizeof(String);
		printf("size = %d\n",size);
		for( i=0;i<size-1;i++)
		{
			reverse[size-i-2]=String[i];
		}

		printf("%s \n",reverse);

	}