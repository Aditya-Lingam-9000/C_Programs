#include<stdio.h>
int main(){
	int pastunits,presentunits;
	printf("Enter last month and current month units readings");
	scanf("\n%d %d",&pastunits,&presentunits);
	int units = presentunits-pastunits;
	
	switch(units){
		case 501 ... 2000:
			printf("total bill: %.2f",units*8.50);
			break;
		case 401 ... 500:
			printf("total bill: %.2f",units*7.50);
			break;
		case 301 ... 400:
			printf("total bill: %.2f",units*6.50);
			break;
		case 201 ... 300:
			printf("total bill: %.2f",units*5.50);
			break;
		case 101 ... 200:
			printf("total bill: %.2f",units*4.50);
			break;
		default:
			printf("total bill: %.2f",units*3.50);
	}
}
