#include<stdio.h>
#include<math.h>
int main(){
    int m,n;
    float sum=0.0;
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++){
        sum=sum+sqrt(i);
    }
    printf("%.2f",sum);
}
