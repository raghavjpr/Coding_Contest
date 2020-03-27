#include <stdio.h>

int main(){
	int t,i;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
	    int n,j,k,a,b,arr[100][100];
	    scanf("%d",&n);
	    
	    for(j=0;j<n;j++){
	       for(k=0;k<=j;k++)
	          scanf("%d",&arr[j][k]);
	    }
	    
	    for(j=n-2;j>=0;j--){
	        for(k=0;k<=j;k++){
	            a = arr[j][k]+arr[j+1][k];
	            b = arr[j][k]+arr[j+1][k+1];
	            if(a>b)
	              arr[j][k]= a;
	            else
	              arr[j][k]=b;
	        }
	    }
	    printf("%d\n",arr[0][0]);
	 }
}
