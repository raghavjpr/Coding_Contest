#include<stdio.h>

int main()
{
	int t,a,b,i=0,x;
	scanf("%d",&t);
	int c[t];
	while(i<t)
	{
		scanf("%d %d",&a,&b);
		c[i] = a + b;
		i = i + 1;
	}
	for(x=0;x < t; x++)
		printf("%d\n",c[x]);
}
