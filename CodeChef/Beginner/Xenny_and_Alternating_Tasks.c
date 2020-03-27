#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n],b[n],count1=0,count2=0;
		for(int i=0;i<n;i++)
			scanf("%d",a+i);
		for(int i=0;i<n;i++)
			scanf("%d",b+i);
		for(int i=0;i<n;i+=2){
			count1 = count1 + a[i];
			count2 = count2 + b[i];
		}
		for(int i=1;i<n;i+=2){
                        count1 = count1 + b[i];
                        count2 = count2 + a[i];
                }
		if(count1<count2)
			printf("%d\n",count1);
		else
			printf("%d\n",count2);
	}
	return 0;
}
