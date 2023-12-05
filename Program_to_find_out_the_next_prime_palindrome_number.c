#include<stdio.h>
int main(){
    int a,b,c,d=0,count=0;
    scanf("%d",&a);
    for(b=a+1;b<=a*a;b++){
        for(int i=1;i<=b;i++){
        	if(b%i==0){
        		count++;
			}
		}
		if(count==2){
        for(c=b;c>0;c/=10){
            int ld=c%10;
             d=(d*10)+ld;    
        }
      }
        if(d==b){
            printf("%d",d);
            break;
        }
        
      count=0;
      d=0;
    }
}