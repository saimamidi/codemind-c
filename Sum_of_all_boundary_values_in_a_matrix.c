#include<stdio.h>
int main(){
    int n,m,sum=0,res=0;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d ",&a[i][j]);
        }
    }
    for(int x=0;x<n;x++){
        for(int y=0;y<m;y++){
            if(x==0||x==n-1){
                sum=sum+a[x][y];
            }
        }
    }
    for(int c=0;c<n;c++){
        for(int d=1;d<m-1;d++){
            if(c==0||c==n-1){
                res=res+a[d][c];
            }
        }
    }
    printf("%d",res+sum);
}