#include<stdio.h>

int main(){
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		if(n<10)
			printf("%s\n","What an obedient servant you are!");
		else
			printf("%s\n","-1");
	}
}
