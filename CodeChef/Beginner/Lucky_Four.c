#include<stdio.h>

int main(){
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int n,count=0;
		scanf("%d",&n);
		while(n){
			if((n%10) == 4)
				count++;
			n = n/10;
		}
		printf("%d\n",count);
	}
}

