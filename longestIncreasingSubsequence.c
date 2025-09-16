#include <stdio.h>

int longestIncreasingSubsequence(int arr[], int n) {
    int lis[n];
    int i, j, max_length = 1;

    // Initialize LIS values for all indexes as 1
    for(i = 0; i < n; i++) {
        lis[i] = 1;
    }

    // Compute optimized LIS values in bottom up manner
    for(i = 1; i < n; i++) {
        for(j = 0; j < i; j++) {
            if(arr[i] > arr[j] && lis[i] < lis[j] + 1) {
            	
                lis[i] = lis[j] + 1;
            }
        }
    }

    // Find the maximum length in lis[]
    for(i = 0; i < n; i++) {
        if(lis[i] > max_length) {
            max_length = lis[i];
        }
    }

    return max_length;
}

int main() {
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int lis_length = longestIncreasingSubsequence(arr, n);
    printf("Length of the longest increasing subsequence is %d\n", lis_length);

    return 0;
}
