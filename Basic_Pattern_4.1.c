#include<stdio.h>
int main(){
    int n,i,b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int res=i%2;
        for(b=1;b<=n;b++){
            printf("%d ",res);
        }
        printf("
");
    }
}