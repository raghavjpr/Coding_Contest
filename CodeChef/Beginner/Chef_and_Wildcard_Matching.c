#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int f=1;
		char a[11],b[11];
		scanf("%s",a);
		scanf("%s",b);
		for(int j=0;j<strlen(a);j++){
			if(a[j] != b[j] && (a[j]!='?' && b[j]!='?')){
				f=0;
				break;
			}
		}
		if(f)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}

