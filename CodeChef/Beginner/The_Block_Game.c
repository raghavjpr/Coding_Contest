#include<stdio.h>
#include<string.h>

int main(void){
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		char a[10000] , pal[10000];
		int j=0, f=1;
		scanf("%s",a);
		while(a[j] != '\0'){
			pal[j] = a[strlen(a) - 1 - j];
			j++;
		}
		pal[j] = '\0';

		for(int k = 0; k<=j; k++){
			if(a[k] != pal[k]){
				f = 0;
				break;
			}
		}
		
		if(f)
			printf("wins\n");
		else
			printf("losses\n");
	}
	return 0;
}

