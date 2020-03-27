#include<stdio.h>
int main(){
	int t,i,j,k,l;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int a[200]={1},m=1,x,carry=0,num;
		scanf("%d",&num);
		for(j=2;j<=num;j++){
			for(k=0;k<m;k++){
				x=a[k]*j+carry;
				a[k]=x%10;
				carry=x/10;
			}
			while(carry!=0){
				a[m]=carry%10;
				m = m + 1;
				carry = carry/10;
			}
		}
		for(int l=m-1;l>=0;l--)
			printf("%d",a[l]);
		printf("\n");
	}
	return 0;
}

