#include<stdio.h>
int main(){
	// sum,product and mean of n elements in the array
	int size;
	printf("Enter size of the array: ");
	scanf("%d",&size);
	int arr[size];
	int i;
	for(i=0;i<size;i++){
		printf("Enter element no%d: ",(i+1));
		scanf("%d",&arr[i]);
	}
	printf("Array elements\n");
	int sum = 0;
	int prod = 1;
	float avg = 0;
	for(i=0;i<size;i++){
		printf("%d\n",arr[i]);
		sum+= arr[i];
		prod*=arr[i];
	}
	avg = sum/size;
	printf("Sum is: %d\n",sum);
	printf("Prod is: %d\n",prod);
	printf("Average is: %.2f",avg);
	
}
