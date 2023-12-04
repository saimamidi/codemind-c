#include<stdio.h>
int main(){
    int a,b,c,sum=0,res=0;
    scanf("%d",&a);
    for(int i=a;i>0;i/=10){
        c=i%10;
        sum=sum+c;
    }
    for(b=a*a;b>0;b/=10){
        int d=b%10;
        res=res+d;
        if(res==sum){
            printf("Automorphic Number
");
            break;
        }
        else if(res>sum){
            printf("Not an Automorphic Number
");
            break;
        }
    }
}