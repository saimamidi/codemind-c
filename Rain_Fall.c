#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<3){
        printf("LIGHT");
    }
    else if(3<=a && a<7){
        printf("MODERATE");
    }
    else if(a>=7)
    {
        printf("HEAVY");
    }
}