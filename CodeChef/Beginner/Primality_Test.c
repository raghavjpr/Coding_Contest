#include<stdio.h>

int prime(int);

int main(void){
	int t;
	scanf("%d",&t);
	for(int i = 0; i<t; i++){
		int n;
		scanf("%d",&n);
		int f = prime(n);
		if(f)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}

int prime(int n){
	if(n<=1)
		return 0;
	if(n<=3)
		return 1;
	if(n%2==0 || n%3==0)
		return 0;
	
	for(int i=5; i*i<=n; i=i+6){
		if(n%i==0||n%(i+2)==0)
			return 0;
	}
	return 1;
}
