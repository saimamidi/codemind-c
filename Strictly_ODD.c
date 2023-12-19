#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0 ; i < a ; i ++){
        scanf("%d",&arr[i]);
    }
    int k = 1;
    for(int i = 0 ; i < a ; i+=2){
        if(arr[i]%2==1)
        k = 0;
    }
    if(k)
    printf("True");
    else
    printf("False");
}