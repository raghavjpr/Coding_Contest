#include<stdio.h>

int main(void){
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
		int a=0,b=0,c=0;
		int hd,te;
		float cc;
		scanf("%d %f %d",&hd,&cc,&te);
		if(hd <= 50)
			a = 1;
		if(cc >= 0.7)
			b = 1;
		if(te <= 5600)
			c = 1;
		int sum = a+b+c;
		switch(sum){
			case 0:
				printf("10\n");
				break;
			case 1:
				if(a==0 && b==0)
					printf("9\n");
				if(b==0 && c==0)
					printf("8\n");
				if(a==0 && c==0)
					printf("7\n");
				break;
			case 2:
				printf("6\n");
				break;
			case 3:
				printf("5\n");
				break;
		}
	}
	return 0;
}
