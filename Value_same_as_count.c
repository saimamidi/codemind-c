#include<stdio.h>
int main(){
    int n,count=1,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int b=0;b<n;b++){
    	scanf("%d",&arr[b]);
	}
    for(int i=0;i<n;i++){
    	if(arr[i] == 0)
    	continue;
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
                arr[j] = 0;
            }
        }
        if(count == arr[i]){
            sum++;
        }
        count=1;
    }
    printf("%d",sum);
} 