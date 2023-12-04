#include<stdio.h>
int main(){
    int a,b,c,sum=0;
    scanf("%d",&a);
    for(int d=1;;d++){
    for(b=a;b>0;b/=10){
        c=b%10;
        sum=sum+c;
    }
    if(sum<10){
        printf("%d",sum);
        break;
    }
    a=sum;
    sum=0;
    }
}