#include<stdio.h>

void n_t(int);

int main(void){
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
		int b;
		scanf("%d",&b);
		n_t(b);
	}
	return 0;
}

void n_t(int b){
	int count = 0;
	int a = b-2;
	while(a > 0){
		count = count + a/2;
		a = a - 2;
	}
	printf("%d\n",count);
}
