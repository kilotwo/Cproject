#include<stdio.h>


struct PID
{
		int P;
		int I;
		int D;
};


main()
{
	struct PID pid={1,2,3};
	printf("the P is %d\n",pid.P);
	printf("the I is %d\n",pid.I);
	printf("the D is %d\n",pid.D);


}