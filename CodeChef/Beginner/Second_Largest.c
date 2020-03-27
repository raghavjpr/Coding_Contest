#include<stdio.h>

int main(){
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int a,b,c,max2=0,max;
		scanf("%d %d %d",&a,&b,&c);
		max2 = ( a > b ? ( b > c ? b : ( a > c ? c : a ) ) : ( a > c ? a : ( b > c ? c : b ) ) );
		printf("%d\n",max2);
	}
}
