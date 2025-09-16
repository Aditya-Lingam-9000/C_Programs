#include<stdio.h>
int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	// armstrong number with power 3
	int r;
	int sum = 0;
	int temp = num;
	while(num!=0){
		r = num%10;
		sum = sum+r*r*r;
		num=num/10;
	}
	
	if(sum==temp){
		printf("Its armstrong");
	}
	else{
		printf("not armstrong");
	}
}
