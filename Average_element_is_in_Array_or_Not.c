#include<stdio.h>
int main(){
    int n,sum=0,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int b=0;b<n;b++){
        sum=sum+a[b];
    }
    for(int c=0;c<n;c++){
    if(sum/n==a[c]){
        printf("True");
        break;
    }
    count++;
    }
    if(count==n){
        printf("False");
    }
}