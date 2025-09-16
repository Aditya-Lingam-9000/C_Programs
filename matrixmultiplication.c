#include <stdio.h>
#define R 5
#define C 5

int main() {
    int A[R][C], B[R][C], M[R][C];
    int i, j, k, r1, c1, r2, c2;

    printf("Enter no of rows and columns for A matrix:\n");
    scanf("%d%d", &r1, &c1);

    printf("Enter no of rows and columns for B matrix:\n");
    scanf("%d%d", &r2, &c2);

    if(c1 == r2) {
        printf("Enter %d integers into A matrix:\n", r1 * c1);
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c1; j++) {
                scanf("%d", &A[i][j]);
            }
        }
        printf("Enter %d integers into B matrix:\n", r2 * c2);
        for(i = 0; i < r2; i++) {
            for(j = 0; j < c2; j++) {
                scanf("%d", &B[i][j]);
            }
        }

        // Matrix multiplication
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c2; j++) {
                M[i][j] = 0;
                for(k = 0; k < c1; k++) {
                    M[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        printf("Matrix A:\n");
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c1; j++) {
                printf("%3d ", A[i][j]);
            }
            printf("\n");
        }

        printf("Matrix B:\n");
        for(i = 0; i < r2; i++) {
            for(j = 0; j < c2; j++) {
                printf("%3d ", B[i][j]);
            }
            printf("\n");
        }

        printf("M Matrix (Product):\n");
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c2; j++) {
                printf("%3d ", M[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Matrix multiplication not possible\n");
    }

    return 0;
}
