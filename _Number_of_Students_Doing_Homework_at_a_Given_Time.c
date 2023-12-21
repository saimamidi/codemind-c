#include<stdio.h>
int main(){
    int n,m,c,flag=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    int b[m];
    for(int j=0;j<m;j++){
        scanf("%d",&b[j]);
    }
    scanf("%d",&c);
    for(int y=0;y<m;y++){
        if(c<=b[y] && c>=a[y]){
            flag++;
        }
    }
    printf("%d",flag);
}