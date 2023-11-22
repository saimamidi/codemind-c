#include<stdio.h>
int main(){
    int i,count=0,a,b,c;
    scanf("%d",&i);
    for( b=i;b>0;b--){
    for( a=b-1;a>0;a--){
    	 
        printf(" ");
        count++;
    }
        for(c=b;c<b+(i-count);c++){
            printf("%d ",c);
        }
        count=0;
    printf("
");    
    
}
}