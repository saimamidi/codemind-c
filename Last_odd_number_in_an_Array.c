#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int b=n-1;b>=0;b--){
        if(a[b]%2!=0){
            printf("%d",a[b]);
            break;
        }
    }
}