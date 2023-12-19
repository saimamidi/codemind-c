#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int count=0;
    fgets(str,100,stdin);
    for(int i=0;str[i]!=NULL;i++){
        if('a'<=str[i] && str[i]<='z'){
            count++;
        }
    }
    printf("%d",count);
}