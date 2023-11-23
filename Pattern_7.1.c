#include<stdio.h>
int main(){
    int i,j,count=0,a,b;
    scanf("%d",&i);
    for( a=1;a<=i;a++){
        for(j=1;j<=a-1;j++){
            printf(" ");
            count++;
        }
        for( b=1;b<(i+1)-count;b++){
            printf("* ");
        }
        count=0;
        printf("
");
    }
}