#include<stdio.h>
int main(){
    int a,b,c,pro=1,sum=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%d",&b);
        for(c=b;c>0;c/=10){
            int d=c%10;
            for(int e=d;e>0;e--){
                pro=pro*e;
            }
            sum=sum+pro;
            pro=1;
        }
        if(sum==b){
            printf("Strong
");
            sum=0;
        }
        else{
            printf("Not Strong
");
            sum=0;
        }
    }
    
}