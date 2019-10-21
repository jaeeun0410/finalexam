#include <stdio.h>

void swap(int *pa, int *pb)
{
	int temp;

	temp=*pa;
	*pa=*pb;
	*pb=temp;
}

int main()
{
	int x=3, y=7;
	printf("Before : x = %d, y= %d\n", x,y);

	swap(&x,&y);

	printf("After : x = %d, y=%d\n", x,y);

	return 0;

}
