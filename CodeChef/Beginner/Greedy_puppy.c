#include<stdio.h>


int main(void){
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
		int n,k,max=0;
		scanf("%d %d",&n,&k);
		for(int j=1; j<=k; j++){
			int c = n%j;
			if(c>max)
				max = c;
		}
		printf("%d\n",max;
	}
	return 0;
}
