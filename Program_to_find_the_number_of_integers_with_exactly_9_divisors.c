#include<stdio.h>
int main(){
    int a,b,c=0,count=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(b=1;b<=i;b++){
            if(i%b==0){
                c++;
            }
        }
        if(c==9){
            printf("%d ",i);
            count++;
        }
        c=0;
    }
    printf("
");
    printf("Total=%d",count);
    count=0;
}