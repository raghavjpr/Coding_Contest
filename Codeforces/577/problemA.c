#include<stdio.h>

int main(){
	int n,m,total=0;
	scanf("%d %d",&n,&m);
	getchar();
	char a[n][m];
	char s[m];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%c",&a[i][j]);
		}
		getchar();
	}
	
	
	int score[m];
	for(int j=0;j<m;j++)
		scanf("%d",score+j);

	for(int j=0;j<m;j++){
		
		int option[5] = {0};
		
		for(int i=0;i<n;i++){
			if(a[i][j] == 'A')
				option[0]++;
			else if(a[i][j] == 'B')
				option[1]++;
                        else if(a[i][j] == 'C')
				option[2]++;
                        else if(a[i][j] == 'D')
                                option[3]++;
                        else if(a[i][j] == 'E')
                                option[4]++;
		}
		
		int max = option[0];
		for(int k=0;k<5;k++){
			if(option[k] > max)
				max = option[k];
		}

		total = total + max*score[j];
	}

	printf("%d",total);
	return 0;
}



