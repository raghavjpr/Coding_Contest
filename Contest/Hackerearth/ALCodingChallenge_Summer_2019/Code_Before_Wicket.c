#include<stdio.h>


int main(){
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
		int x,y;
		scanf("%d %d",&x,&y);
		if(x <= 10)
			printf("lbw\n");
		else
			printf("not-out\n");
	}
	return 0;
}

