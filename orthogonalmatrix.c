#include <stdio.h>
#include <stdbool.h>

#define MAX 100

bool isOrthogonal(int a[][MAX], int n) {
    int trans[n][n], prod[n][n];

    // Find transpose
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            trans[i][j] = a[j][i];

    // Multiply matrix with its transpose
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int sum = 0;
            for (int k = 0; k < n; k++) {
                sum += a[i][k] * trans[k][j];
            }
            prod[i][j] = sum;
        }
    }

    // Check if product is identity matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == j && prod[i][j] != 1) || (i != j && prod[i][j] != 0))
                return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Enter size of matrix: ");
    scanf("%d", &n);
    int mat[MAX][MAX];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    if(isOrthogonal(mat, n))
        printf("Matrix is Orthogonal\n");
    else
        printf("Matrix is NOT Orthogonal\n");

    return 0;
}
