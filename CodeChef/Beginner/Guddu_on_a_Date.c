#include<stdio.h>

int main(){

	unsigned long long int t,i,n,a;
	scanf("%llu",&t);
	for(i=1;i<=t;i++){
		scanf("%llu",&n);
		for(a = n*10;;a++){
			unsigned long long int sum=0,temp=0,j=a;
			while(j){
				temp = j%10;
				sum = sum + temp;
				j = j/10;
			}
			if(sum%10==0){
				printf("%llu \n",a);
				break;
			}

		}
	}
}
