#include<stdio.h>

long long int absll(long long int , long long int);

int main(){
	int n;
	long long int b=0;
	scanf("%d",&n);
	while(n--){
		long long int a;
		scanf("%lld",&a);
		b = absll(a,b);
	}
	if(b==0)
		printf("YES");
	else
		printf("NO");
	return 0;
}

long long int absll(long long int x,long long int y){
	long long int c = x - y;
	if(c<0)
		return -1*c;
	else
		return c;
}

