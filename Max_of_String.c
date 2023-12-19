#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char s[100];
    fgets(s,100,stdin);
     char max=s[0];
    for( i=0;s[i]!=NULL;i++){
        if(s[i]>max){
            max=s[i];
        }
    }
    printf("%c",max);
}