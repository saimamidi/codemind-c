#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    if((n%2)!=0){
    for(int b=0,c=n-1;b<=n/2,c>n/2;b++,c--){
            printf("%d %d ",a[b],a[c]);
        }
    }
    if((n%2)!=0){
    printf("%d 0",a[n/2]);
    }
    else {
        for(int x=0,y=n-1;x<n/2,y>=n/2;x++,y--){
            printf("%d %d ",a[x],a[y]);
        }
    }
}