#include<stdio.h>
int main(){
    int x1,y1,x2,y2,sum1,sum2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    sum1=x1+y1;
    sum2=x2+y2;
    if(sum1>=sum2){
        printf("%d",sum2);
    }
    else{
        printf("%d",sum1);
    }
}