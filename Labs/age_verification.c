#include<stdio.h>
int main(){
	int age;
	printf("enter age: ");
	scanf("%d",&age);
	
	if (age>=18){
		printf("vote eligible");
	}
	else{
		printf("not eligible");
	}
}
