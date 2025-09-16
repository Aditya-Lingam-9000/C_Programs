#include <stdio.h>

// Function to get length of a string (no string.h)
int str_length(const char *str) {
    int len = 0;
    while (*(str + len) != '\0') {
        len++;
    }
    return len;
}

// Function to swap two string pointers
void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort array of strings by length using pointer
void sort_by_length(char *arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str_length(arr[j]) > str_length(arr[j + 1])) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    // Sample array of strings
    char *arr[] = {"banana", "apple", "kiwi", "grapefruit", "pear"};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    sort_by_length(arr, n);

    printf("\nAfter sorting by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}