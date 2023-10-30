#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int a=1;a<=n-i;a++){
            printf("%d",a);
        }
        for(int a=1;a<=i;a++){
            printf("*");
        }
        printf("
");
    }
}