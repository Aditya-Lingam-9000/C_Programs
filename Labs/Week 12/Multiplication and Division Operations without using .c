#include <stdio.h>

// Function to multiply two integers without using '*'
int mul(int a, int b) {
    int result = 0;
    int positive = 1;
    
    // Handle negative numbers
    if (a < 0) { a = -a; positive = !positive; }
    if (b < 0) { b = -b; positive = !positive; }

    // Add 'a' to result 'b' times
    for (int i = 0; i < b; i++) {
        result += a;
    }

    // Adjust sign
    return positive ? result : -result;
}

// Function to divide two integers without using '/'
int div(int dividend, int divisor) {
    if (divisor == 0) {
        printf("Error: Division by zero is undefined.\n");
        return 0; // Return 0 or handle error suitably
    }

    int sign = 1;
    if (dividend < 0) { dividend = -dividend; sign = -sign; }
    if (divisor < 0) { divisor = -divisor; sign = -sign; }

    int quotient = 0;
    int sum = divisor;

    // Subtract divisor from dividend until dividend < divisor
    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }

    return sign * quotient;
}

int main() {
    int a, b;

    printf("Enter two integers for multiplication (a b): ");
    scanf("%d %d", &a, &b);
    printf("Multiplication (without '*'): %d\n", mul(a, b));

    printf("Enter dividend and divisor for division (dividend divisor): ");
    scanf("%d %d", &a, &b);
    int quotient = div(a, b);
    if (b != 0)
        printf("Integer division (without '/'): %d\n", quotient);

    return 0;
}