#include <stdio.h>

int main() {
    int num, temp, reverse = 0,digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
		digit = temp % 10; // Get last digit
        reverse = reverse * 10 + digit; // Add last digit to reverse
        temp = temp / 10; // Remove last digit
    }

    if (reverse == num)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}
