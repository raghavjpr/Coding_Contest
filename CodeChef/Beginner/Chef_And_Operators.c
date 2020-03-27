#include<stdio.h>

int main(void){
	int t;
	scanf("%d",&t);
	for(int i = 0; i<t; i++){
		long long int a,b;
		scanf("%lld %lld",&a,&b);
		if(a>b)
			printf(">\n");
		else if(a<b)
			printf("<\n");
		else
			printf("=\n");
	}
}
