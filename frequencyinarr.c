#include<stdio.h>
int main(){
    int n,i,element,count=0;
    int arr[45];
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("enter elements into array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter an element to find frequency:");
    scanf("%d",&element);
    for(i=0;i<n;i++){
        if(arr[i]==element)
        count++;
    }
    printf("element %d occurs %d times",element,count);
    return 0;
    
}
