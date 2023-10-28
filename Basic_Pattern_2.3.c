#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=65;i<65+n;i++){
        for(int a=65;a<=i;a++)
        {
            printf("%c ",a);
        }
        printf("
");
    }
}