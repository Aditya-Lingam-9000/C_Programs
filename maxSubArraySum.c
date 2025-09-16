#include <stdio.h>

int maxSubArraySum(int arr[], int n) {
    int max_so_far = arr[0];
    int current_max = arr[0];
    int i;

    for(i = 1; i < n; i++) {
        // Update current_max to be the max of current element or current_max + element
        if (current_max + arr[i] > arr[i])
            current_max = current_max + arr[i];
        else
            current_max = arr[i];

        // Update max_so_far if current_max is greater
        if (max_so_far < current_max)
            max_so_far = current_max;
    }

    return max_so_far;
}

int main() {
    int n;
	int i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_sum = maxSubArraySum(arr, n);

    printf("Maximum sum of a subarray is %d\n", max_sum);

    return 0;
}
