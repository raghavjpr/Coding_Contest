#include<stdio.h>

int main()
{
	int n,k,i=0,x,count=0;
	scanf("%d %d",&n,&k);
	while(i<n)
	{
		scanf("%d",&x);
		if(x%k==0)
			count = count + 1;
		i = i + 1;
	}
	printf("%d",count);
}

