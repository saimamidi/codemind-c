#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    int l=strlen(str);
    printf("%d",l-1);
}