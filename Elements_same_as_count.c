#include<stdio.h>
int main(){
    int n,count=0,c=1;
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
            printf("%d ",arr[i]);
            c=0;
        }
        count=0;
    }
    if(c){
        printf("-1");
    }
}