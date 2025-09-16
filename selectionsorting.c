#include<stdio.h>
int main(){ 
    int arr[50],n,i,j,temp;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter %d elements into array\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
        printf("before sorting");
        for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
        for(i=0;i<n;i++)
        
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }


        }
        printf("after sorting");
        for(i=0;i<n;i++)
           printf("%d\n",arr[i]);
           return 0;
    }
