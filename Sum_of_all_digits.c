#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(int i=n;i>0;i/=10){
        int res=i%10;
        sum=sum+res;
    }
    printf("%d",sum);
}