#include<stdio.h>

int gcd(int , int);
int gcd_final(int* , int);

int main(void){
	int T;
	scanf("%d",&T);
	for(int i = 0; i<T; i++){
		int N , r[50] = {0};
		scanf("%d",&N);
		for(int j = 0; j<N; j++){
			scanf("%d", r+j);
		}
		int a = gcd_final(r,N);
		for(int j = 0; j<N; j++){
			printf("%d ", r[j]/a);
		}
		printf("\n");
	}
}

int gcd(int a ,int b){
	if(a == 0)
		return b;
	return gcd(b%a,a);
}

int gcd_final(int r[] , int N){
	int a = gcd(r[0],r[1]);
	for(int idx = 2; idx<N; idx++){
		a = gcd(a,r[idx]);
	}
	return a;
}
