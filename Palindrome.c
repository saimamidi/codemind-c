#include<stdio.h>
int main(){
    int n,res=0;
    scanf("%d",&n);
    for(int i=n;i>0;i=i/10){
        int ld=i%10;
        res=(res*10)+ld;
    }
    if(res==n){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}