#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[100];
    char str2[100];
    fgets(str,100,stdin);
    strcpy(str2,str);
    printf("%s",str2);
}