#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	int sumt,f;
	char c;
	while(t--){
		int cc[26] = {0};
		sumt = 0, f = 0;
		while((c = getchar()) != '\n') {
			cc[c-'a']++;
			sumt++;
		}
		if(sumt%2 != 0)
			f = 0;
		else{
			for(int i = 0;i<26;i++){
				if(cc[i] == sumt/2)
					f = 1;
			}
		}
		if(f)
		       	printf("YES\n");
		else 
			printf("NO\n");

	}
	return 0;
}
