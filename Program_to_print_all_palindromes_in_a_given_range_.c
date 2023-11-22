#include<stdio.h>
int main(){
	int a,b,res=0,ld,i;
	scanf("%d",&a);
	scanf("%d",&b);
	for(int d=a;d<b;d++){
	    res=0;
	for(i=d;i>0;i/=10){
		ld=i%10;
		res=res*10+ld;
	}
	if(res==d){
	    printf("%d ",res);
	}
	}
	
}
