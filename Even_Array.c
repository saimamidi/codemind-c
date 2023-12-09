#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int b=0;b<n;b++){
        if(a[b]%2==0){
            count++;
        }
    }
    if(count==n){
        printf("True");
    }
    else{
        printf("False");
    }
}