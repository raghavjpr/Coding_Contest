#include<stdio.h>

int main(void){
	int n;
	scanf("%d",&n);
	while(n){
		int f=1;
		int a[n],in[n];
		for(int i =0; i<n; i++){
			scanf("%d", &(a[i]));
			in[a[i]-1] = i+1;
		}
		for(int i = 0; i<n; i++){
			if(a[i] != in[i]){
				f = 0;
				break;
			}
		}
			if(f)
				printf("ambiguous\n");
			else
				printf("not ambiguous\n");

			scanf("%d", &n);
		}
	return 0;
}

