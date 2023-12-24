#include<stdio.h>
int main(){
    int n;
    float sum=0.000000;
    scanf("%d",&n);
    for(float i=1;i<=n;i++){
        float t=1/i;
        sum=sum+t;
    }
    printf("%.2f",sum);
} 