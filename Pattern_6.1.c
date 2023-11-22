#include<stdio.h>
int main(){
    int i,j;
    scanf("%d",&i);
    for(int a=1;a<=i;a++){
        for(int j=1;j<=i-a;j++){
            printf(" ");
        }
        for(int b=1;b<=a;b++){
            printf("* ");
        }
        printf("
");
    }
    
}