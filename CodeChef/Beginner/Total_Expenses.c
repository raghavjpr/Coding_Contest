#include<stdio.h>

int main(void){
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
		float q,p;
		scanf("%f %f",&q,&p);
		if (q>1000)
			printf("%f\n",(q*p) - (0.1*q*p));
		else
			printf("%f\n",q*p);
	}
	return 0;
}
