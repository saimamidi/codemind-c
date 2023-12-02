#include<stdio.h>
int main(){
    int i,j,c=0;
    scanf("%d",&i);
    for(int a=1;a<=i;a++){
        for(int j=1;j<=a-1;j++){
            printf(" ");
            c++;
      }
        for(int b=1;b<=i-c;b++){
            printf("%d ",i-c);
        }
        printf("
");
        c=0;
    }
    
}