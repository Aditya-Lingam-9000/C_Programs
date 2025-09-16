#include<stdio.h>
int main(){
	int i,sum=0,n,j,count=0;
	printf("Enter no of perfect numberes to print ");
	scanf("%d",&n);
	
		for(i=1;i<=1000000;i++){
	
			for(j=1;j<i;j++){
				if(i%j==0){
					sum+=j;
				}
				}
		if(sum==i){
			printf("\n%d is a perfect number",i);
			count+=1;
		}
		sum = 0;
		if(count == n){
			break;
		}
	
		}
		
	}
