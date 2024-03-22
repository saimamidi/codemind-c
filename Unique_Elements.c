#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],a[n],count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<i && arr[j]==arr[i]){
                break;
            }
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count>=1){
            a[k]=arr[i];
            k++;
        }
        count=0;
    }
    for(int i=0;i<k;i++){
        printf("%d ",a[i]);
    }
}