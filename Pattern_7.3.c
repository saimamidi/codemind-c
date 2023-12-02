#include<stdio.h>
int main()
{
    int i,j,c=0;
    scanf("%d",&i);
    for(int a=1;a<=i;a++){
        for(j=1;j<=a-1;j++){
            printf(" ");
            c++;
        }
        for(int b=i-c;b>=1;b--){
            printf("%d ",b);
        }
        printf("
");
        c=0;
    }
}