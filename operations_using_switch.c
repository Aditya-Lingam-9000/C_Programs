#include<stdio.h>
int main(){
	char oper;
	double a,b;
	printf("Enter operator to perform that operation: ");
	scanf(" %c ", &oper);
	
	printf("Enter two operands: ");
	scanf("%lf %lf", &a, &b);
	switch(oper){
		case '+':
			printf("value is: %.2lf",(a+b));
			break;
		case '-':
			printf("value is: %.2lf",(a-b));
			break;
		case '*':
			printf("value is: %.2lf",(a*b));
			break;
		case '/':
			printf("value is: %.2lf",(a/b));
			break;
		default:
			printf("Enter valid operator");
	}
	
}
