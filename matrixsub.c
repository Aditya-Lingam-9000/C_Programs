#include <stdio.h>

#define R 5
#define C 5

int main() {
    int A[R][C], B[R][C], sub[R][C];
    int r1, c1, r2, c2;
    int i, j;

    printf("Enter the number of rows and columns for Matrix A: \n");
    scanf("%d %d", &r1, &c1);

    
    printf("Enter the number of rows and columns for Matrix B:\n ");
    scanf("%d %d", &r2, &c2);

    
    if (r1 == r2 && c1 == c2) {

        
        printf("Enter %d integers for Matrix A:\n", r1 * c1);
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                scanf("%d", &A[i][j]);
            }
        }

        // Input elements for Matrix B
        printf("Enter %d integers for Matrix B:\n", r2 * c2);
        for (i = 0; i < r2; i++) {
            for (j = 0; j < c2; j++) {
                scanf("%d", &B[i][j]);
            }
        }

    
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                sub[i][j] = A[i][j] - B[i][j];
            }
        }

        
        printf("Matrix A:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                printf("%d ", A[i][j]);
            }
            printf("\n");
        }

        
        printf("Matrix B:\n");
        for (i = 0; i < r2; i++) {
            for (j = 0; j < c2; j++) {
                printf("%d ", B[i][j]);
            }
            printf("\n");
        }

        
        printf("\nSub Matrix (A - B):\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                printf("%d ", sub[i][j]);
            }
            printf("\n");
        }

    } else {
        printf("Matrix subtraction not possible.\n");
    }

    return 0;
}
