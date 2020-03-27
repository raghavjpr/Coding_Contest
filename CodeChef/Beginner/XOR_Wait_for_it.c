#include<stdio.h>

int main(){
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		unsigned long a,b,o,n;
		scanf("%lu %lu",&a,&b);
		n = (b -a) + 1;
		if(n%2==0)
			o = n/2;
		else{
			if(a%2==0)
				o = n/2;
			else
				o = (n/2) + 1;
		}
		if(o%2==0)
			printf("%s\n","Even");
		else
			printf("%s\n","Odd");
	}
}
