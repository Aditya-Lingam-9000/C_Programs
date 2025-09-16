#include<stdio.h>
int main(){
	int units;
	float rate;
	float bill;
	rate = 5.0;
	
	// no.of inputs consumed
	printf("Enter no.of units consumed ");
	scanf("%d",&units);
	
	// calculating the bill
	bill = units*rate;
	
	printf("Total electricity bill is %.2f",bill);
}
