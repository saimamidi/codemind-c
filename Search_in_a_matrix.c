#include<stdio.h>
int main(){
    int n,m,c,count=0;
    scanf("%d
%d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&c);
    for(int x=0;x<n;x++){
        for(int y=0;y<m;y++){
            if(c==a[x][y]){
                printf("1");
                break;
            }
            count++;
        }
    }
    if(count==m*n){
        printf("0");
    }
}