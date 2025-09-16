#include<stdio.h>
// * 
// * *
// * * *
// * * * *
// * * * * *
int main(){
    int i = 1;
    int j;
    while(i<=5){
        for(j=1;j<=i;j++){
            printf("* ");
        };
        i++;
        printf("\n");
    }
}