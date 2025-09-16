// write a program to count the no of digits in a number
#include<stdio.h>
int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	int count = 0;
	while (num!=0){
		num = num/10;
		count++;
	}
	printf("The no of digits is: %d",count);
}
