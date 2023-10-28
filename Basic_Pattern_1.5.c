#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=65;i<65+n;i++){
        for(int a=1;a<=n;a++){
            printf("%c ",i);
        }
        printf("
");
    }
}