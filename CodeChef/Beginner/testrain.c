#include<stdio.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,l=0;
		scanf("%d",&n);
		int* a =  (int*)malloc(n*sizeof(int));
		for(int i=0;i<n;i++)
			scanf("%d",a+i);
		if(a[0]==1 && a[n-1]==1 && a[n/2]==7){
			for(int j=0;j<n/2;j++){
				if(a[j]==a[n-j-1]){
					if( a[j+1]==a[j] || a[j+1]==(a[j]+1))
						l++;
				}
			}
		}
		if(l==n/2)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
