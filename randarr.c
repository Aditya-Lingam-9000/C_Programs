#include<stdio.h>
int main(){
    int arr[50];
    int i,n;
    printf("how many elements u want to enter into array:");
    scanf("%d",&n);
     arr[i]=rand()%100;
    printf("printing the elements in array:");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
