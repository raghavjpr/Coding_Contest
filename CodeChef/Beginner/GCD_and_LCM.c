#include<stdio.h>

long long int gcd(long long int,long long int);
long long int lcm(long long int,long long int);


int main(void){
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
		long long int n1,n2;
		scanf("%lld %lld",&n1,&n2);
		long long int a = gcd(n1,n2);
		long long int b = lcm(n1,n2);
		printf("%lld %lld\n",a,b);
	}
	return 0;
}

long long int gcd(long long int a,long long int b){
	if(a==0)
		return b;
	return gcd(b%a,a);
}

long long int lcm(long long int a,long long int b){
	return a*b/gcd(a,b);
}

