#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[50],n,i,key,found=0,pos;
    printf("size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    arr[i]=rand()%100;
    printf("enter key element to search\n");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
            found=1;
            pos=i;
            break;
        }
    }
        if(found==0)
        printf("element not found");
        else
        printf("element at %d pos",pos);
        
    printf("the array is:");    
    for(i=0;i<n;i++){
        printf("%d\n\n",arr[i]);
    }
    return 0;
}
