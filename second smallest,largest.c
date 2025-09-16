#include<stdio.h>
int main(){
    int n,i,temp;
    int arr[i];
    int j;
    printf("enter no of elements into array:");
    scanf("%d",&n);
    printf("Enter %d numbers inta array:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // Bubble sort
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            
            }
        }
        
    }
    printf("second smallest=%d\n",arr[1]);
    printf("second largest=%d\n",arr[n-2]);
    return 0;
}
