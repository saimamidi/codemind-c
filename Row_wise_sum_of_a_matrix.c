#include<stdio.h>
int main(){
    int n,m,sum=0;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int b=0;b<n;b++){
        for(int c=0;c<m;c++){
            sum=sum+a[b][c];
        }
        printf("%d ",sum);
        sum=0;
    }
}