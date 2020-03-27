#include<stdio.h>

int Sum(int,int);
int add(int);

int main(void){
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
		int d,n;
		scanf("%d %d",&d,&n);
		int sum = Sum(d,n);
		printf("%d\n",sum);
	}
	return 0;
}

int Sum(int d, int n){
	int su = add(n);
	for(int i=0; i<d-1; i++){
		su = add(su);
	}
	return su;
}

int add(int n){
	return n*(n+1)/2;
}
