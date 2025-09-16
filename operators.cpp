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
	
	if ((a>5) && (b>7)) {
		printf("a is greater than 5 and b is greater than 7");
	}
	
	if ((a>10) || (b>4)){
		printf("\n\neither a is greater than 10 or b is greater than 4");
	}
	
	

	return 0;
}
