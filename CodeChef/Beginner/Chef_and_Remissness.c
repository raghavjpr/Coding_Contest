#include<stdio.h>

int main(){
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int a,b,max;
		scanf("%d %d",&a,&b);
		max = a;
		max = (max > b ? max : b);
		printf("%d %d\n", max , a+b );
	}
}
