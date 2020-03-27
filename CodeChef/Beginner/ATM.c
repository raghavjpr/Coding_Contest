#include <stdio.h>

int main(void)
{
	int w;
	float b;
	scanf("%d %f",&w,&b);
	if(0<w<=1200 && 0<=b<=2000)
	{
		if(w%5==0 && w+0.50<b)
		{
			b=b-w-0.50;
			printf("%.2f",b);
		}
		else
			printf("%.2f",b);
	}
}
