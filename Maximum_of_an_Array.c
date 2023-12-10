#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int b=0;b<n;b++){
        if(a[b]>max){
            max=a[b];
        }
    }
    printf("%d",max);
}