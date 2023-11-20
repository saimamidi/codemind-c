#include<stdio.h>
int main(){
    int n;
    for(int i=1;i<=100;i++){
        scanf("%d
",&n);
        if(n!=-1){
            printf("%d
",n*n);
        }
        else{
            break;
        }
    }
}