#include <stdio.h>

int main() {
    int m, n, i, j, k;

    printf("Enter the number of elements in the first sorted array: ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter %d elements of the first sorted array:\n", m);
    for(i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second sorted array: ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter %d elements of the second sorted array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[m + n];
    i = 0; // index for arr1
    j = 0; // index for arr2
    k = 0; // index for merged array

    // Merge the arrays in sorted order
    while(i < m && j < n) {
        if(arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements from arr1, if any
    while(i < m) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements from arr2, if any
    while(j < n) {
        merged[k++] = arr2[j++];
    }

    // Print merged array
    printf("Merged sorted array:\n");
    for(i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
