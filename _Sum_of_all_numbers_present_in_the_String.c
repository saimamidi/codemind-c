#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int sum=0;
    fgets(s,100,stdin);
for(int i=0;s[i]!=NULL;i++){
    if('0'<=s[i] && s[i]<='9'){
        
        sum=sum+(s[i]-'0');
    }
}
printf("%d",sum);
}