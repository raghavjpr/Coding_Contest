#include<stdio.h>
#define MAX 1000001

int num[MAX] = {};

int  main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		num[n]++;
	}
	int i;
	for (i = 0; i < MAX; i++){
		while(num[i]--)
			printf("%d\n", i);
	}

	return 0;
}
