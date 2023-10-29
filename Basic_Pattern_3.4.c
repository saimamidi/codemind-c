#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int res=(n+65)-i;
        for(int b=1;b<=(n-i)+1;b++){
            printf("%c ",res);
        }
        printf("
");
    }
}
