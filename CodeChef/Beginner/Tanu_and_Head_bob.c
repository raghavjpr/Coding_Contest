#include<stdio.h>

int main(void){
	int t;
	scanf("%d",&t);
	getchar();
	for(int i=0; i<t; i++){
		int n,f=0;
		scanf("%d",&n);
		getchar();
		for(int j=0; j<n; j++){
			char a;
			scanf("%c",&a);
			if(a == 'I'){
				f = 1;
				break;
			}
			else if(a == 'Y'){
				f = 2;
				break;
			}
		}
		while ((getchar()) != '\n');
		if(f==0)
			printf("NOT SURE\n");
		if(f==1)
			printf("INDIAN\n");
		if(f==2)
			printf("NOT INDIAN\n");
	}
	return 0;
}

