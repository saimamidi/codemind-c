#include<stdio.h>
int main(){
    int n,res,b,i;
    scanf("%d",&n);
    for( i=0;i<=(n-1);i++){
        res=n-i;
        for( b=res;b<(n+i)-(i-1);b++){
            printf("%d ",b);
        }
        printf("
");
    }
}