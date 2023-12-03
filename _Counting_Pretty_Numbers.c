#include<stdio.h>
int main(){
    int a,b,c,d,co=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%d %d",&c,&d);
        for(b=c;b<=d;b++){
            if(b%10==2||b%10==3||b%10==9){
                    co++;
               }
        }
        printf("%d
",co);
        co=0;
    }
}