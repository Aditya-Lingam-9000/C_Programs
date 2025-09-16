#include<stdio.h>
int main(){
	int integer;
	printf("Enter an integer: ");
	scanf("%d",&integer);
	printf("integer is %d\n",integer);
	
	float flt;
	printf("\nEnter a float: ");
	scanf("%f",&flt);
	printf("float is %.2f\n",flt);
	
	char string[40];
	printf("\nEnter a string: ");
	scanf("%s",&string);
	printf("string is %s",string);
}
