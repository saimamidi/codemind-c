#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int res=i%2;
        for(int b=1;b<=n;b++){
            printf("%d ",res);
        }
        printf("
");
    }
}