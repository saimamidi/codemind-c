#include<stdio.h>
int main(){
    int n,m,sum=0,res=0;
    scanf("%d
%d",&n,&m);
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    for(int j=1;j<m;j++){
        if(m%j==0){
            res=res+j;
        }
    }
    if(sum==m&&res==n){
        printf("Amicable");
    }
    else{
        printf("Not Amicable");
    }
}
