#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            a[k]=arr[i];
            k++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            a[k]=arr[i];
            k++;
        }
    }
    for(int j=0;j<n;j++){
        printf("%d ",a[j]);
    }
}