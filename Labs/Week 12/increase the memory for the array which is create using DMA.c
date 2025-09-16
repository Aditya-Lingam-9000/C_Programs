#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, new_n;
    int *arr;

    printf("Enter initial number of elements: ");
    scanf("%d", &n);

    // Allocate initial memory
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Current array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter new size to increase array: ");
    scanf("%d", &new_n);

    // Increase memory using realloc
    int *temp = (int *)realloc(arr, new_n * sizeof(int));
    if (temp == NULL) {
        printf("Memory reallocation failed!\n");
        free(arr);
        return 1;
    }
    arr = temp;

    // Initialize new elements if new size is greater
    if (new_n > n) {
        printf("Enter %d new elements:\n", new_n - n);
        for (int i = n; i < new_n; i++) {
            scanf("%d", &arr[i]);
        }
    }

    printf("Array elements after increasing size:\n");
    for (int i = 0; i < new_n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free memory
    free(arr);

    return 0;
}