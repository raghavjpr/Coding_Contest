#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tests;
    scanf("%d",&tests);
    while(tests--) {
        int m,x,y,i,j,houseno,count,skip=0;
        scanf("%d%d%d",&m,&x,&y);
        int *a = (int*)calloc(100,sizeof(int));
        for(i=0;i<m;i++){
            count=0;
            scanf("%d",&houseno);
            if(skip==0)
		    for(j=(houseno-(x*y)-1>=0?houseno-(x*y)-1:0);j<(houseno+(x*y)<100?houseno+(x*y):100);j++) {
			    a[j]++;
		    }
	    for(j=0;j<100;j++) {
                if(a[j]==0)
                    count++;
            }
            if(count==0){
                skip=1;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
