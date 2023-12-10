#include<stdio.h>
int main()
{
    int n,count=0,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int b=0;b<n;b++){
        sum=sum+a[b];
    }
    int avg=sum/n;
    for(int c=0;c<n;c++){
        if(a[c]>=avg){
            count++;
        }
    }
    printf("%d",count);
}