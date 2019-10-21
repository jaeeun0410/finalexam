#include<stdio.h>

int main(void){
	int i;
	for(i=0;i<=1000;i++){
		printf("%d\n",i);
		if(i % 10 == 0) puts("");
	}

	return(0);
}
