#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int line=0;
		for(int i=1;i<=n;i++){
			line = line + 1;
			n = n - i;
		}
		printf("%d\n",line);
	}
	return 0;
}
