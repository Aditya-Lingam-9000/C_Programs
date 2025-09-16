#include<stdio.h>
int main(){
    int n,i,j,temp;
    int arr[50];
    printf("enter no of elements:");
    scanf("%d",&n);
    printf("enter elements into array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]%2!=0 && arr[j]%2==0){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }  
    printf("array after rearranging:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }  
    return 0;
    
}
}
