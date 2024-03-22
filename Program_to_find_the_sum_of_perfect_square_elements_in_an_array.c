#include<stdio.h>
#include<math.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int sq=sqrt(arr[i]);
        float s=sqrt(arr[i]);
        if(sq/s==1.00000){
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}