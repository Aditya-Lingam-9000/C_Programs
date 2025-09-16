#include <stdio.h>

#define L 3    // Number of layers
#define R 3    // Number of rows
#define C 3    // Number of columns

int main() {
    int arr[L][R][C];
    
    printf("Enter elements of 3D array (3 layers, each 3x3):\n");
    for (int i = 0; i < L; i++)
        for (int j = 0; j < R; j++)
            for (int k = 0; k < C; k++)
                scanf("%d", &arr[i][j][k]);

    // Calculate sum of each layer
    for (int i = 0; i < L; i++) {
        int layer_sum = 0;
        for (int j = 0; j < R; j++)
            for (int k = 0; k < C; k++)
                layer_sum += arr[i][j][k];
        printf("Sum of layer %d = %d\n", i, layer_sum);
    }

    return 0;
}
