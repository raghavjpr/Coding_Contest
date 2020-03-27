#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(y>=x)
	        printf("0\n");
	    else
	        printf("%d\n",(x-y));
	}
	return 0;
}
