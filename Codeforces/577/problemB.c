#include<stdio.h>

int main(){
	int n,f=1;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",a+i);
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	int k = n;
	int i=0;
	for(;i<n;){
		if(a[i] == 0)
			i++;
		else{
			a[i] = a[i] - a[k-1];
			a[k-1] = a[k-1] - a[k-1];
			k--;
		}
	}

	for(int i=0;i<n;i++){
		if(a[i] != 0)
			f=0;
	}

	if(f)
		printf("YES");
	else
		printf("NO");
}
