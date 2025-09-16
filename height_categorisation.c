#include<stdio.h>

int main(){
	float person_height;
	printf("Enter height in cm: ");
	scanf("%f",&person_height);
	
	if (person_height<150.0){
		printf("The person is dwarf");
	}
	else if ((person_height>=150.0) && (person_height<165.0)){
		printf("The person is average height");
	}
	else if(person_height>=165.0){
		printf("The person is tall");
	}
	else{
		printf("The person is abnormal height");
	}
}
