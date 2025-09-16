#include <stdio.h>
#include <stdbool.h>

#define MAX 10

bool isMagicSquare(int mat[MAX][MAX], int n) {
    int sum_diag1 = 0, sum_diag2 = 0;
    for (int i = 0; i < n; i++) {
        sum_diag1 += mat[i][i];
        sum_diag2 += mat[i][n - i - 1];
    }
    if (sum_diag1 != sum_diag2)
        return false;

    for (int i = 0; i < n; i++) {
        int row_sum = 0, col_sum = 0;
        for (int j = 0; j < n; j++) {
            row_sum += mat[i][j];
            col_sum += mat[j][i];
        }
        if (row_sum != sum_diag1 || col_sum != sum_diag1)
            return false;
    }
    return true;
}

int main() {
    int n;
    printf("Enter size of square matrices: ");
    scanf("%d", &n);

    int mat1[MAX][MAX], mat2[MAX][MAX];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat2[i][j]);

    if (isMagicSquare(mat1, n))
        printf("First matrix is a Magic Square\n");
    else
        printf("First matrix is NOT a Magic Square\n");

    if (isMagicSquare(mat2, n))
        printf("Second matrix is a Magic Square\n");
    else
        printf("Second matrix is NOT a Magic Square\n");

    return 0;
}
