#include<stdio.h>

int main(){
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int n,count=0,temp;
		scanf("%d",&n);
		while(n>=2048){
			count++;
			n = n - 2048;
		}
		while(n){
			temp = n%2;
			if(temp == 1)
				count++;
			n = n/2;
		}
		printf("%d\n",count);
	}
}
