#include<stdio.h>

//void small_add(int* , int);


int main(void){
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
		int n;
		scanf("%d",&n);
		int num, min, min2;
//		int a[n];
		min = min2 = 1000000;
		for(int j=0; j<n; j++){
			scanf("%d",&num);
			if(num<min){
				min2 = min;
				min = num;
			}
			else if(num>min && num<min2)
				min2 = num;
		}
		printf("%d\n", min + min2);
//		small_add(a,n);
	}
	return 0;
}

//void small_add(int a[],int n){
//	int min = a[0];
//	int min2 = a[1];
//	if(min > min2){
//		int temp = min;
//		min = min2;
//		min2 = temp;
//	}
//	for(int i=0; i<n; i++){
//		if(min>a[i]){
//			min = a[i];
//			min2 = min;
//		}
//		if(min<a[i] && min2>a[i]){
//			min2 = a[i];
//		}
//	}
//	int p = min + min2;
//	printf("%d\n",p);
//}
