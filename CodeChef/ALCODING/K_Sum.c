#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k,f=0,sum=0;
		scanf("%d %d",&n,&k);
		int a[100000];
		for(int i=0;i<n;i++)
			scanf("%d",a);
		if(n%k==0)
			f=1;

