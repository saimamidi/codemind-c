#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%2==0){
    for(int i=a;i<=b;i+=2)
    {
        printf("%d ",i);
    }
    }
    else{
        int c=a+1;
        for(int i=c;i<=b;i+=2){
            printf("%d ",i);
        }
    }
}