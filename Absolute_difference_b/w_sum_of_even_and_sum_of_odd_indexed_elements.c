#include<stdio.h>
#include<math.h>
int main(){
    int n,sum=0,res=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int b=0;b<n;b+=2){
        sum=sum+a[b];
    }
    for(int c=1;c<n;c+=2){
        res=res+a[c];
    }
    printf("%d",abs(sum-res));
}