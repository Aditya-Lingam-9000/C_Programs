#include<stdio.h>
int main(){
	// Farenheit to Celsius
	int choice;
	float temp,converted;
	printf("\nChoose one of the choices below...");
	printf("\nFarenheit to Celsius  -->  1");
	printf("\nCelsius to Farenheit  -->  2");
	printf("\n\nEnter the choice: ");
	scanf("%d",&choice);
	
	if (choice==1){
		printf("\nEnter temp in Farenheit: ");
		scanf("%f",&temp);
		converted = (temp - 32) * 5 / 9;
        printf("\nTemperature in Celsius: %.2f°C\n", converted);
	}
    else if (choice==2){
    	printf("\nEnter temp in Celsius: ");
    	scanf("%f",&temp);
    	converted = (temp * 9 / 5) + 32;
        printf("\nTemperature in Fahrenheit: %.2f°F\n", converted);

	}
	else{
		printf("\nEnter valid choice input...");
	}

 
	
}
