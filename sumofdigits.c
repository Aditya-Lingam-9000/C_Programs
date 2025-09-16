#include<stdio.h>
int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	// sum of digits in a number
	int sum = 0;
	int r;
	while(num!=0){
		r = num%10;
		sum += r;
		num = num/10;
	};
	printf("sum of digits in a number is: %d",sum);
}
