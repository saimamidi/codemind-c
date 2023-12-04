#include<stdio.h>
int main(){
    int a,b,c,count=0;
    scanf("%d
%d",&a,&b);
    for(int i=a;i<=b;i++){
        for(c=1;c<=i;c++){
            if(i%c==0){
                count++;
            }
        }
        if(count==2){
            printf("%d
",i);
        }
        count=0;
    }
}