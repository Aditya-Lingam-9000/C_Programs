#include <stdio.h>

// Function to calculate sum and product of two integers using pointers
void calculate(int a, int b, int *sum, int *product) {
    *sum = a + b;
    *product = a * b;
}

int main() {
    int x = 5, y = 7;
    int sum_result, product_result;

    // Call function and pass addresses of sum_result and product_result
    calculate(x, y, &sum_result, &product_result);

    printf("Sum of %d and %d = %d\n", x, y, sum_result);
    printf("Product of %d and %d = %d\n", x, y, product_result);

    return 0;
}