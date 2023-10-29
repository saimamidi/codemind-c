#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int a=65;a<(n+65)-i;a++){
            printf("%c ",a);
        }
        printf("
");
    }
}