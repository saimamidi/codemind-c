#include<stdio.h>
int main(){
    int n,b,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(b=1;b<=n-1;b+=2){
        sum=sum+a[b];
    }
    printf("%d",sum);
}