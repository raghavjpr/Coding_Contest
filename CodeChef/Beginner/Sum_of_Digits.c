#include<stdio.h>

int main(){
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int n,sum=0,temp;
		scanf("%d",&n);
		while(n){
			temp = n%10;
			sum = sum + temp;
			n = n/10;
		}
		printf("%d",sum);
	}
}
