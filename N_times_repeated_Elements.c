#include<stdio.h>
int main(){
    int n,c=0,res=0,flag=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count;
    scanf("%d",&count);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<i && arr[j]==arr[i]){
                break;
            }
            if(arr[i]==arr[j]){
                c++;
            }
        }
        if(c==count){
            printf("%d ",arr[i]);
            flag=0;
        }
        c=0;
    }
   if(flag==1){
       printf("-1");
   }
}