#include<stdio.h>
int main(){
    char s[10];
    fgets(s,10,stdin);
    for(int i=0;s[i]!=NULL;i++){
        if(i==6){
            printf("%c",s[i]);
        }
    }
}