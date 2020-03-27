#include<stdio.h>
#define MAX 100002

int main(){
	int t,i;
	scanf("%d",&t);
	getchar();
	for(i=0;i<t;i++){
		char a[MAX]={};
		int j = 0,count1 = 0,count2 = 0;
		scanf("%[^\n]%*c",a);
		while(a[j] != '\0'){
			if(a[j] == 'R')
				count1++;
			if(a[j] == 'B')
				count2++;
			j++;
		}
		if(count1 > count2)
			printf("Red\n");
		else if(count1 < count2)
			printf("Blue\n");
		else if(count1 != 0 && count2 != 0)
			printf("Tie\n");
		else
			printf("\n");
	}
}
