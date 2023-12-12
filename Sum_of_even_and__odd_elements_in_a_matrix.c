#include<stdio.h>
int main(){
    int n,m,res=0,sum=0;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d %d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]%2==0){
                sum=sum+a[i][j];
            }
            else{
                res=res+a[i][j];
            }
        }
    }
    printf("%d %d",sum,res);
}