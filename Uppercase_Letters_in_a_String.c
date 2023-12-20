#include<stdio.h>
int main(){
    int count=0;
    char s[100];
    fgets(s,100,stdin);
    for(int i=0;s[i]!=NULL;i++){
        if('A'<=s[i] && s[i]<='Z'){
            count++;
        }
    }
    printf("%d",count);
}