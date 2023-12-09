#include<stdio.h>
int main(){
    int n,c,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&c);
    for(int b=0;b<n;b++){
        if(a[b]==c){
            printf("True");
            break;
        }
        count++;
    }
    if(count==n){
        printf("False");
    }
}