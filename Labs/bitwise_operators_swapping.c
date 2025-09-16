#include<stdio.h>

int main(){
	int a,b;
	printf("Enter a value: ");
	scanf("%d",&a);
	printf("Enter b value: ");
	scanf("%d",&b);
	b = 4;
	printf("\n a is %d, b is %d",a,b);
	// swapping using XOR operator
	a = a^b;
	b = a^b;
	a = a^b;
	
	printf("\n a is %d, b is %d",a,b);
}
