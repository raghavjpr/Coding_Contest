#include<stdio.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int M,x,y;
		scanf("%d %d %d",&M,&x,&y);
		int h,count=0,j=0,f=0;
		int *a = (int*)calloc(100,sizeof(int));
		for(int i=0;i<M;i++){
			count=0;
			scanf("%d",&h);
			if(f==0)
				for(j=(h-(x*y)-1>=0?h-(x*y)-1:0);j<(h+(x*y)<100?h+(x*y):100);j++){
					a[j]++;
				}
			for(j=0;j<100;j++){
				if(a[j]==0)
					count++;
			}
			if(count==0)
				f=1;
		}
		printf("%d\n",count);
	}
	return 0;
}
