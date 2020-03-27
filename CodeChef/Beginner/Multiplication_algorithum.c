#include<stdio.h>

int main(){
	int t,a,b,i,c[101]={0};
	c[0] = 1;
	for(b=1;b<101;b++){
		c[b] = multi(c[b-1],b);
	}
	scanf("%d",&t);
	for(i=0;i<=t;i++){
		scanf("%d",&a);
		printf("%d",c[a]);
	}
}

int multi(int a[],int b){
	while(b--){
		for(i=0
