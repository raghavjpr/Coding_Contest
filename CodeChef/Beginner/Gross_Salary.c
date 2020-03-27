#include<stdio.h>

int main(void){
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
		float s;
		scanf("%f",&s);
		float HRA=0,DA=0;
		if(s <= 1500){
			HRA = 0.1*s;	
			DA = 0.9*s;
		}
		if(s >= 1500){
			HRA = 500;
			DA = 0.98*s;
		}
		printf("%0.2f\n",s+HRA+DA);
	}
	return 0;
}
