#include<stdio.h>
#include<stdlib.h>

int staircases(int s, unsigned int a[], unsigned int n){
    if(a[s-1] == 0){
        return 0;
    }
    int f_up=0;
    int f_down=0;
    for(unsigned int i=s;i<n;i++){
        if(a[i] == 0){
            //printf("HEY1\n");
            f_up = 1;
            break;
        }
    }
    for(int i=s-2;i>=0;i--){
        if(a[i] == 0){
            //printf("HEY2\n");
            f_down = 1;
            break;
        }
    }
    int stair1=0;
    int stair2=0;
    if(f_up){
        //printf("HEY3\n");
        for(unsigned int i=s;i<n;i++){
            //printf("------\n");
            stair1++;
            if(a[i] == 0){
                break;
            }
        }
    }
    if(f_down){
        //printf("HEY4\n");
        for(int i=s-2;i>=0;i--){
            //printf("********\n");
            stair2++;
            if(a[i] == 0){
                break;
            }
        }
    }
    if(stair1<stair2 || stair2==0 && stair1!=0){
        return stair1;
    }
    return stair2;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        unsigned int n,s,k;
        scanf("%d%d%d",&n,&s,&k);
        int* arr = (int*)calloc(k,sizeof(int));
        for(int i=0;i<k;i++){
            scanf("%d",arr+i);
        }
        unsigned int* a = (unsigned int*)calloc(n,sizeof(unsigned int));
        for(int i=0;i<k;i++){
            a[arr[i]-1] = 1;
        }

        int stairs = staircases(s,a,n);

        printf("%d\n",stairs);
    }
}