#include<stdio.h>

int* multi(int* , int* , int , int);

int main(){
	int a,b,c[200]={0},d[200]={0},i=0,j=0,h;
	int* res;
	scanf("%d %d",&a,&b);
	while(a){
		c[i] = a % 10;
		a = a/10;
		i++;
	}
	//for (h=0;h<200;h++)
	//	printf("%d",c[h]);
	//printf("\n");

	while(b){
		d[j] = b % 10;
		b = b/10;
		j++;
	}
	//for (h=0;h<200;h++)
	//	printf("%d",d[h]);
	//printf("\n");

	res = multi(c,d,i,j);
	for (h=200;h>=0;h--)
		printf("%d",*(res + h));

	printf("\n");
	return 0;
}
int* multi(int c[] , int d[] , int x, int y){
	int i,j,mul,carry1=0,carry2;
	static int res[200]={0};
	for(j=0;j<x;j++){
		mul = (c[j] * d[0]) + carry1;
		res[j] = mul % 10;
		carry1 = mul/10;
		}
	res[j] = carry1;
	return res;
}





