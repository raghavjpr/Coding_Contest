#include<stdio.h>

int main(){
	int t,i,sum1=0,sum2=0,lead=0,w;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		sum1 = sum1 + a;
		sum2 = sum2 + b;
		if((sum1 > sum2) && (lead < (sum1 - sum2))){
			lead = sum1 - sum2;
			w = 1;
		}
		if((sum2 > sum1) && (lead < (sum2 - sum1))){
			lead = sum2 - sum1;
			w = 2;
		}
	}
	printf("%d %d",w,lead);
}

