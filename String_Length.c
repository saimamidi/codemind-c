#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    printf("%d",strlen(str)-1);
}