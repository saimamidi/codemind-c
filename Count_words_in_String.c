#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int count=0;
    fgets(s,100,stdin);
    for(int i=0;s[i]!=NULL;i++){
        if(s[i]==' '){
            count++;
        }
    }
    printf("%d",count+1);
}