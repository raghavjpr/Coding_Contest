#include<stdio.h>
#include<string.h>
#define MAX 100002

int main(){
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		char n[MAX],final[MAX];
		int k,j;
		scanf("%s",n);
		for(k = 0 , j = strlen(n)-1 ; k < strlen(n) , j >= 0 ; k++ , j--)
			final[k] = n[j];
		final[k] = '\0';
		int g=0;
		for(j = 0 ; j < strlen(final) ; j++){
			if(final[j] == 0)
				g++;
			else
				break;
		}
		for(g;g<strlen(final);g++){
			printf("%d",final[g]);
		}
		printf("\n");
	}
}
