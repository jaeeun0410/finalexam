#include <stdio.h>

void doubleaverage(double in1, double in2);

void main(void){
	int in1, in2;
	printf("Please enter 2 real numbers);
	scanf("%d %d", &in1, &in2);
	printf("\n average : %lf",doubleaverage(in1,in2));

	return 0;
}


void doubleaverage(double in1. double in2)
{
	return (in1+in2)/2.0;
}
