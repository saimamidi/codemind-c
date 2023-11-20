#include<stdio.h>
int main(){
    int n,count=0,sum=0,b=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        count=0;
        if(n%i==0){
            b++;
            for(int a=1;a<=i;a++){
                if(i%a==0){
                    count++;
                }
            }
            if(count==2){
                sum++;
            }
            else{
                count=0;
            }
        }
    }
       
    printf("%d",b-sum);
}