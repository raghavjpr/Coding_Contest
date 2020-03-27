#include<stdio.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,f=0;
		scanf("%d",&n);
		int* a =  (int*)malloc(n*sizeof(int));
		for(int i=0;i<n;i++)
			scanf("%d",a+i);
		for(int i=0,j=n-1;i<n/2-1,j>=n/2-1;i++,j--){
			if(a[i]!=a[j]){
				printf("Hey1");
				f=1;
				break;
			}
			if(a[i]>7){
				printf("Hey2");
				f=1;
				break;
			}
			if(a[i]!=a[i]+1){
				printf("--Hey10--%d--%d--",i,j);
				f=1;
				break;
			}
			if(a[i]!=a[i+1]){
				printf("Hey9");
				f=1;
				break;
			}
			if(a[n/2]!=7){
				printf("Hey8");
				f=1;
				break;
			}
			if(a[n-1]!=1){
				printf("Hey7");
				f=1;
				break;
			}
			if(a[j]!=a[j-1]){
				printf("Hey11");
				f=1;
				break;
			}
			if(a[j]!=a[j]+1){
				printf("Hey12");
				f=1;
				break;
			}
			if(a[0]!=1){
				printf("Hey6");
				f=1;
				break;
			}
			if(a[j]<0){
				printf("Hey5");
				f=1;
				break;
			}
			if(a[j]>7){
				printf("Hey4");
				f=1;
				break;
			}
			if(a[i]<0){
				printf("Hey3");
				f=1;
				break;
			}
		}
		if(f)
			printf("no\n");
		else
			printf("yes\n");
	}
	return 0;
}
