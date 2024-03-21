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
        if(arr[i]==1){
            sum=sum+pow(2,n-i-1);
        }
    }
    printf("%d",sum);
}