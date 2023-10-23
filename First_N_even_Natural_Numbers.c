#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        int res;
        res=i*2;
        printf("%d ",res);
    }
}