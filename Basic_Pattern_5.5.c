#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int a=1;a<=(n-i)-1;a++){
            printf("*");
        }
        for(int a=1;a<=i+1;a++){
            printf("%d",i+1);
        }
        printf("
");
    }
}