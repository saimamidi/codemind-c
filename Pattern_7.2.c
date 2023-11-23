#include<stdio.h>
int main(){
    int i,j,count=0;
    scanf("%d",&i);
    for(int a=1;a<=i;a++){
        for(j=1;j<=a-1;j++){
            printf(" ");
            count++;
        }
        for(int b=1;b<=(i)-count;b++){
            printf("%d ",(i)-count);
        }
        count=0;
        printf("
");
    }
}