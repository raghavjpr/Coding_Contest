#include<stdio.h>
#include<stdbool.h>

bool pos(int,int,int);

int main(void){
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
		int r,X[3],Y[3];
		scanf("%d",&r);
		scanf("%d %d %d %d %d %d",X,Y,X+1,Y+1,X+2,Y+2);
		if(  ( pos( X[0]-X[1] , Y[0]-Y[1] , r ) && pos( X[0]-X[2] , Y[0]-Y[2] ,r ) )|| pos( X[1]-X[2] , Y[1]-Y[2] ,r ) )
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}

bool pos(int a, int b, int r){
	if(a*a + b*b <= r*r)
		return true;
	else
		return false;
}
