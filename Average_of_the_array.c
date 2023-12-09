#include<stdio.h>
int main(){
    int n;
    float sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int b=0;b<n;b++){
        sum=sum+a[b];
    }
    float avg=sum/n;
    printf("%.2f",avg);
}