#include<stdio.h>


int main(void){
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
		int n,f=1;
		unsigned long long int sum=0;
		scanf("%d",&n);
		int a[n];
		for(int j=0; j<n; j++){
			scanf("%d",a+j);
			sum = sum + a[j];
		}
		double mean = (double)sum/n;
		if((int)mean == mean){
			for(int j=0; j<n; j++){
				if(a[j] == (int)mean){
					f = 0;
					printf("%d\n",j+1);
					break;
				}
			}
		}
		if(f)
			printf("Impossible\n");
	}
	return 0;
}
