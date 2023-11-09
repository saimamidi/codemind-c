#include<stdio.h>
int main(){
    int n,pro=1,sum=0;
    scanf("%d",&n);
    for(int i=n;i>0;i/=10){
        int res=i%10;
        pro=pro*res;
        sum=sum+res;
    }
    printf("%d",pro-sum);
}