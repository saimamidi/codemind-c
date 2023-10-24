#include<stdio.h>
int main(){
    char s;
    scanf("%c",&s);
    if(s=='a'||s=='A'||s=='e'||s=='E'||s=='i'||s=='I'||s=='o'||s=='O'||s=='u'||s=='U'){
        printf("VOWEL");
    }
    else{
        printf("CONSONANT");
    }
}