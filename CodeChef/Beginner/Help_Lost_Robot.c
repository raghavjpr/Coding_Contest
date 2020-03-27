#include <stdio.h>

int main(void) {
	int t,i,x1,y1,x2,y2;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d %d %d\n",&x1,&y1,&x2,&y2);
	    if((x1-x2)==0 && (y2-y1)>0)
	        printf("up\n");
	    else if((x1-x2)==0 && (y2-y1)<0)
	        printf("down\n");
	    else if((y1-y2)==0 && (x2-x1)>0)
	        printf("right\n");
	    else if((y1-y2)==0 && (x2-x1)<0)
	        printf("left\n");
	    else
	        printf("sad\n");
	}
	return 0;
}
