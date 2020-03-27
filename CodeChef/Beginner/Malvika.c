#include<stdio.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[101];
		scanf("%s",s);
		int x=0,y=0;
		for(int i=0;s[i] != '\0';i++){
			if(s[i] =='a')
				x++;
			else if(s[i] == 'b')
				y++;
		}
		if(x>y)
			printf("%d\n",y);
		else
			printf("%d\n",x);
	}
	return 0 ;
}
