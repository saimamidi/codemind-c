#include<stdio.h>
int main(){
    int i,j,c=0;
    scanf("%d",&i);
    for(int a=1;a<=i;a++){
        for(j=1;j<=a-1;j++){
            printf(" ");
            c++;
        }
        for(int d=1;d<=i-c;d++){
            printf("%c ",65+(i-a));
        }
        printf("
");
        c=0;
    }
}