#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int doll = 1;
		while(n--){
			int a;
			scanf("%d",&a);
			doll = doll ^ a;
		}
		printf("%d\n",doll);
	}
	return 0;
}
