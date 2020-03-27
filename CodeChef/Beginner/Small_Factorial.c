#include<stdio.h>

int main(){
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int n,j,fac=1;	
		scanf("%d",&n);
		for(j=1;j<=n;j++){
			fac = fac * j;
		}
		printf("%d\n",fac);
	}
}

