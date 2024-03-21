#include<stdio.h>
int main(){
    int n,count=0;
    float sum=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<i && arr[j]==arr[i]){
                break;
            }
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==arr[i]){
            sum=sum+arr[i];
            c++;
        }
        count=0;
    }
    if(c==0){
        printf("-1");
    }
    else{
    float avg=sum/c;
    printf("%.2f",avg);
    }
}