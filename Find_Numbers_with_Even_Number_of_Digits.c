#include<stdio.h>
int main(){
    int n,count=0,res=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        count=0;
        int c = arr[j];
        while(c>0){
            count++;
            c/=10;
        }
        if(count>0 &&count%2==0){
            res++;
        }
    }
    printf("%d",res);
}