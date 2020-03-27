#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		int a[n],b[n],r[n];
		for(int j=0;j<n;j++)
			scanf("%d",a+j);
		
		for(int j=0;j<n;j++)
			scanf("%d",b+j);
		
		for(int j=0;j<n;j++){
			int temp = a[j]*20 - b[j]*10;
			if(temp<0)
				r[j] = 0;
			else
				r[j] = temp;
		}
		int max = r[0];
		for(int j=0;j<n;j++){
			if(r[j]>max)
				max = r[j];
		}
		printf("%d\n",max);
	}
	return 0;
}
