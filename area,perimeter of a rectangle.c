#include<stdio.h>
int main(){
    int l,b;
    printf("Enter length length and breadth values: ");
    scanf("%d %d",&l,&b);
    int perimeter = 2*(l+b);
    int area = l*b;
    printf("perimeter: %d",perimeter);
    printf("area is: %d",area);
}