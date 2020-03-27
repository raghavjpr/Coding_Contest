#include<stdio.h>

int main(void){
	int t;
	scanf("%d",&t);
	for(int i = 0; i<t; i++){
		int n,idx=0,count=0;
		scanf("%d",&n);
		int a[6] = {100,50,10,5,2,1};
		while(n){
			if(n >= a[idx]){
				n = n - a[idx];
				count++;
			}
			else
				idx++;
		}
		printf("%d\n",count);
	}
}
