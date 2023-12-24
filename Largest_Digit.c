#include<stdio.h>
int main(){
    int n,max=0;
    scanf("%d",&n);
    for(int i=n;i>0;i=i/10){
        int l=i%10;
        if(l>max){
            max=l;
        }
    }
    printf("%d",max);
}