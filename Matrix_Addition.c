#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d ",&a[i][j]);
        }
    }
    int x,y;
    scanf("%d %d",&x,&y);
    int b[x][y];
    for(int c=0;c<x;c++){
        for(int d=0;d<y;d++){
            scanf("%d ",&b[c][d]);
        }
    }
    for(int f=0;f<m;f++){
        for(int g=0;g<n;g++){
            printf("%d ",a[f][g]+b[f][g]);
        }
        printf("
");
    }
}