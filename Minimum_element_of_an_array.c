#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min=a[0];
    for(int b=0;b<n;b++){
        if(a[b]<min){
            min=a[b];
        }
    }
    printf("%d",min);
}