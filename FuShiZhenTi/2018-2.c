#include "stdio.h"
#include "string.h"

void main()
{	
		
	char string1[40];
	char string2[40];
	char *p =string1;
	char *q  ;
	char *s;
	int i;
	printf("Please input string1:\n");
	gets(string1);
	for (i=0;strlen(string1);i++)
	{
		if (string1[i] == ',')
		{
			string1[i] = '\0';
			break;
		}
	}

	//*p='\0';
	printf("The connect  string is : %s \n", strcat(string1," black") );
//	printf("Please input string2:\n");
//	gets(string2);
//	printf("The connect  string is : %s \n",strcat(string1,string2));



}