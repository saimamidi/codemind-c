#include<stdio.h>
int main(){
    int n,sum=-1;
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++){
        sum+=2;
        printf("%d ",sum);
    }
}