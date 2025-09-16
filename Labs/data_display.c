#include<stdio.h>
int main(){
	char name[50];
	int roll;
	float marks;
	printf("\nEnter student's name: ");
	scanf("%s",&name);
	printf("\nEnter roll no: ");
	scanf("%d",&roll);
	printf("\nEnter marks: ");
	scanf("%f",&marks);
	
	//Displaying the student details
	printf("\n\nName: %s",name);
	printf("\nRoll No: %d",roll);
	printf("\nMarks: %.2f",marks);
	
}
