#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,c,n;
		scanf("%d%d%d%d",&a,&b,&c,&n);
		double y = (a+b+c+n)/3.0;
		if((int)y==y)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
