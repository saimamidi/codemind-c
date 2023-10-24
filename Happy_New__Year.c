#include<stdio.h>
int main(){
    int h,m;
    scanf("%d %d",&h,&m);
    printf("%d",(((23-h)*60)+(60-m)));
}