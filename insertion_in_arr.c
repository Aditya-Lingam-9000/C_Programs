#include<stdio.h>
#include<stdlib.h>
void main()
{
    int arr[50]={2,3,4,5,6},n,i,pos,key;
    printf("how many integers you want");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
        
    
    printf("all the elements in the array\n");
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
    printf("enter the position where you want to replace\n");
    scanf("%d%d",&pos,&key);
    if(pos<0||pos>n){
        printf("invalid position for insertion");
        return;//exit if position is invalid
    }
    for(i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=key;
    printf("after inserting elements in array\n");
    for(i=0;i<n+1;i++){
    printf("%d",arr[i]);
    }
    printf("\n");
    
    
}
