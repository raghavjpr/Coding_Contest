#include<stdio.h>

int main(void){
	int n;
	scanf("%d",&n);
	int D[n];
	int A[n][30000];
	for(int i=0; i<n; i++){
		scanf("%d",D+i);
		A[0][D[i]-1]++
	}
	for(int i=1; i<n; i++){
		A[i]
