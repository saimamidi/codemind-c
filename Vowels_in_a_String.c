#include<stdio.h>
#include<string.h>
int main(){
    char s[100],ch,c,b;
    fgets(s,100,stdin);
    scanf("%c",&ch);
    for(int i=1;s[i]!=NULL;i++){
         if(s[i]==ch){
             printf("True
");
              b=i;
              c=0;
             break;
         }
         else{
             c=1;
         }
    }
    if(c){
        printf("False");
    }
    if(c==0){
    printf("%d",b);
    b=0;
    }
}