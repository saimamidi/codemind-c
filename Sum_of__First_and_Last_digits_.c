#include<stdio.h>
int main(){
    int n,f;
    scanf("%d",&n);
    int l=n%10;
    for(int i=n/10;i>0;i=i/10){
        f=i%10;
    }
    printf("%d",f+l);
}