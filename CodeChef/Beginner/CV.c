#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,count=0;
		char s[101];
		scanf("%d",&n);
		scanf("%s",s);
		for(int i=1;i<n;i++){
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
				if(s[i-1]!='a'&&s[i-1]!='e'&&s[i-1]!='i'&&s[i-1]!='o'&&s[i-1]!='u'){
					count++;
				}
			}
		}
		printf("%d\n",count);
	}
}
