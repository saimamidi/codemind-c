#include<stdio.h>
int main(){
    int a,b,c,count=0;
    scanf("%d
%d",&a,&b);
    for(c=(a+b)+1;;c++){
        for(int i=1;i<=c;i++){
            if(c%i==0){
                count++;
            }
        }
        if(count==2){                   
            printf("%d",(c-(a+b)));
            break;
        }
        count=0;
    }
}