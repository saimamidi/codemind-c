#include<stdio.h>
int main(){
    int n=3;
    int a[n],b[n],c[2] = {0},k=0,t=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            int alice= ++k;
            c[0]=alice;
        }
        if(a[i]<b[i]){
            int bob= ++t;
            c[1]=bob;
        }
    }
    printf("%d %d",c[0],c[1]);
}