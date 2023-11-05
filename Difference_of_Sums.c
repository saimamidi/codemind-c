#include<stdio.h>
#include<math.h>
int main(){
    int n,sum=0,res=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
        res=res+pow(i,2);
    }
    printf("%d",(sum*sum)-res);
}