#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,r=0,g=0,b=0;
		scanf("%d",&n);
		getchar();
		char c;
		while((c=getchar()) != '\n'){
			if(c=='R')
				r++;
			else if(c=='G')
				g++;
			else
				b++;
		}
		int max;
		max = (r >= g ? (b >= r ? b : r ) : (b >= g ? b : g));
		//printf("%d\n",max);
		printf("%d\n", (r + g + b - max));
	}
	return 0;
}
