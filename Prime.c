#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        float division;
        division=n%i;
        if(division==0.000000){
            printf("Not Prime");
            break;
        }
        else{
            printf("Prime");
            break;
        }
    }
}