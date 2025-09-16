#include<stdio.h>

int main(){
	int a,b;
	printf("Enter two numbers a and b: ");
	scanf("%d %d",&a,&b);
	printf("sum = %d\n",a+b);
	printf("sub = %d\n",a-b);
	printf("mul = %d\n",a*b);
	printf("div = %f\n",(double)a/b);
	printf("modulus = %d\n",a%b);

	return 0;
}
