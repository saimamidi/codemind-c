#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int a=65;a<65+n;a++){
            printf("%c ",a);
        }
        printf("
");
    }
}