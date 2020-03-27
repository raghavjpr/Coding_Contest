#include<stdio.h>

int main(){
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int n,sum=0;
		scanf("%d",&n);
		sum = sum + (n%10);
		while(n){
			if(n/10 == 0)
				sum = sum + n;
			n = n/10;
		}
		printf("%d\n",sum);
	}
}

