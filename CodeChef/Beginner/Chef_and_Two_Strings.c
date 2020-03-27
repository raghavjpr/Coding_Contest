#include<stdio.h>
#include<string.h>

int main(void){
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
		char s1[100],s2[100];
		scanf("%s",s1);
		scanf("%s",s2);
		int j=0, diff_max = 0, diff_min = strlen(s1);
		while(s1[j] != '\0' && s2[j] != '\0'){
			if(s1[j] == '?' || s2[j] == '?' || s1[j] != s2[j])
				diff_max++;
			if(s1[j] == '?' || s2[j] == '?' || s1[j] == s2[j])
				diff_min--;
			j++;
		}
		printf("%d %d\n",diff_min,diff_max);
	}
	return 0;
}
