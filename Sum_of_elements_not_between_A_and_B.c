#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int f,l;
    scanf("%d %d",&f,&l);
    for(int i=0;i<n;i++){
        if(arr[i]<f || arr[i]>l){
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}