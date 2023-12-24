#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int s=n*n;
    for(int i=s;i>0;i=i/10){
        sum=sum+(i%10);
    }
    if(sum==n){
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
}