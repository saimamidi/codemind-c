#include<stdio.h>
int main(){
    int a,count=0,c=0;
    scanf("%d",&a);
    for(int i=a;i>0;i/=10){
        int res=i%10;
        if(res%2==0){
            count++;
        }
        else{
            c++;
        }
    }
    if(count==0){
        printf("Odd");
    }
    else if(c==0){
        printf("Even");
    }
    else{
        printf("Mixed");
    }
    
}