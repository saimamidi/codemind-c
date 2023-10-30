#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int a=0;a<=i;a++){
            printf("%d",a+1);
        }
        for(int b=0;b<(n-i)-1;b++){
            printf("*");
        }
        printf("
");
    }
}