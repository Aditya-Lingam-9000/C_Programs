#include<stdio.h>

int main(){
	int a = 10;
	int b = a++ + a++;
	printf("\n%d",b);
	// output: 21
	
	int x = 10;
	int y = 20;
	int z = (x>y)?x:(y,x+y);
	printf("\n%d",z);
	// output: 30
	
	int p = 0;
	int q = 1;
	if (p&q){
		printf("\nBitwise True");
	}
	else if(p&&q){
		printf("\nConditional operator");
	}
}
