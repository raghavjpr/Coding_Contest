#include<stdio.h>
#include<stdlib.h>


int main(void){
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
		int o;
		scanf("%d",&o);
		int r[50];
		for(int j=0; j<50; j++)
			scanf("%d",r+j);
		int rr;
		rr = abs( (r[o-1]/o) - (r[49]/50) ) + (r[o-1]/o);
		printf("%d\n",rr*o);
	}
	return 0;
}
