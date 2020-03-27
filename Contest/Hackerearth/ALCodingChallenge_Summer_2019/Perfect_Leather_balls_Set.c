#include<stdio.h>
#define MAX 100000

int main(void){
	int n,c;
	scanf("%d %d",&n,&c);
	int u[n];
	for(int i=0; i<n; i++)
		scanf("%d",u+i);
	int m;
	scanf("%d",&m);
	for(int i=0; i<m; i++){
		int a,b,f=1,s[MAX]={0};
		scanf("%d %d",&a,&b);
		int k = (b-a+1)/2;
		int x[b-a+1]
		for(int j = a-1; j<b; j++){
			s[u[j]-1]++;



		int k = (b-a+1)/2;
		for(int j=0; j<c; j++){
			if(s[j] > k){
				f = 0;
				printf("yes ");
				printf("%d\n",j+1);
				break;
			}
		}
		if(f)
			printf("no\n");
	}
	return 0;
}
