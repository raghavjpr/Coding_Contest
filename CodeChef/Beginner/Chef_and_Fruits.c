#include<stdio.h>
#include<stdlib.h>

int main(void){
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
		int n,m,k,f=0;
		scanf("%d %d %d",&n,&m,&k);
		int x = abs(n-m);
		if(x<=k)
			printf("0\n");
		else
			printf("%d\n",x-k);
	}
	return 0;
}
