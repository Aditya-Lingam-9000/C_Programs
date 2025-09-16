#include<stdio.h>
int main(){
	//1 to 100 numbers with for loop
	int i;
	for(i=1;i<=100;i++){
		printf("i = %d\n",i);
	}
	
	// between range using while loop
	
	int a,b;
	printf("Enter starting range: ");
	scanf("%d",&a);
	printf("Enter ending range: ");
	scanf("%d",&b);
	
	i = a;
	while(i<=b){
		printf("i = %d\n",i);
		i++;
	}
	
	// sum of numbers between range
	int x,y;
	printf("Enter starting range: ");
	scanf("%d",&x);
	printf("Enter ending range: ");
	scanf("%d",&y);
	
	
	
}
