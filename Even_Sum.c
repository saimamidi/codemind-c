#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int b=0;b<n;b++){
        if(a[b]%2==0){
            sum=sum+a[b];
        }
    }
    printf("%d",sum);
}