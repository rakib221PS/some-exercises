#include<stdio.h>
int main(){
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    int sum = k*w*(w+1)/2;
    int f=sum-n;
    if(f<0){
            printf(0);
            //md

    }
    else{
        printf("%d",f);
    }
    return 0;
}
