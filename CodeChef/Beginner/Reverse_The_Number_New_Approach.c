#include<stdio.h>

int main(){
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int n,temp,count=0;
		scanf("%d",&n);
		while(n){
			temp = n%10;
			if(temp>0)
				count=1;
			if(count == 1)
				printf("%d",temp);
			n = n/10;
		}
		printf("\n");
	}
}
