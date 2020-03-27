#include<stdio.h>

int main(void){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char c = getchar();
		getchar();
		if(c == 'B'||c =='b')
			printf("BattleShip\n");
		else if(c == 'C'||c =='c')
			printf("Cruiser\n");
		else if(c == 'D'||c =='d')
			printf("Destroyer\n");
		else if(c == 'F'||c =='f')
			printf("Frigate\n");
	}
}
