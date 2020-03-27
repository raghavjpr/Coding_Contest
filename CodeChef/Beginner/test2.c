#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	int a[200]={1},m=1,x,temp=0,num;
	scanf("%d",&num);
	for(int i=2;i<=num;i++){
		for(int j=0;j<m;j++){
			x=a[j]*i+temp;
			a[j]=x%10;
			temp=x/10;
		}
		while(temp!=0){
			a[m]=temp%10;
			m = m + 1;
			temp/=10;
		}
	}
	for(int i=m-1;i>=0;i--){
	printf("%d",a[i]);
	}
	printf("\n");
	}
	return 0;
}
