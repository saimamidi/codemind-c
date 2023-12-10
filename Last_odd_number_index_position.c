#include<stdio.h>
int main(){
    int n,c;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int b=0;b<n;b++){
        if(a[b]%2!=0){
            c=b;
        }
    }
    printf("%d",c);
}