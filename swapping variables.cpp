#include<stdio.h>

int main(){
	int a,b,c;
	a = 5;
	b = 4;
	printf("a is %d, b is %d",a,b);
	
	// using third variable
	c = a;
	a = b;
	b = c;
	printf("\na is %d,  b is %d",a,b);
	
	printf("\n\n\n");
	// using without third variable
	
	a = 5;
	b = 4;
	printf("a is %d,b is %d",a,b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("\na is %d,b is %d",a,b);
	
	// using xor operator
	a=5;
	b=4;
	printf("\n\n\na is %d,b is %d",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\na is %d,b is %d",a,b);
	
}
