#include<stdio.h>
int main(){
    char str[100];
    int sum=0;
    fgets(str,100,stdin);
    for(int i=0;str[i]!=NULL;i++){
        if('0'<=str[i] && str[i]<='9'){
            sum=sum+(str[i]-'0');
    }
    }
    printf("%d",sum);
}