#include<stdio.h>
#include<math.h>
int main(){
	//float l,b;
	//printf("Enter length and breadth: \n");
	//scanf("%f %f",&l,&b);
	
	//printf("area is: %f",l*b);
	
	//printf("square root value of 2 is: %f",2.0^0.5);
	double x;
	int i;
	printf("Enter initial_value: ");
	scanf("%d",&x);
	
	for(i=1;i<=100;i++){
		x =(pow(x,2)+2)/(2*x);
		printf("%d",x);
	}
}
