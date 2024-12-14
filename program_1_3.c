// Implement a C program to perform Boolean matrix multiplication and addition on two given Boolean matrices.
#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
    int matrixA[MAX_ROWS][MAX_COLS], matrixB[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];
    int rowsA, colsA, rowsB, colsB;

    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d %d", &rowsA, &colsA);

    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d %d", &rowsB, &colsB);

    if (colsA != rowsB) {
        printf("Matrix multiplication is not possible. Number of columns in matrix A must equal the number of rows in matrix B.\n");
        return 0;
    }

    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    printf("Matrix A:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            printf("%d ", matrixA[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("%d ", matrixB[i][j]);
        }
        printf("\n");
    }

    // Boolean Matrix Addition
    printf("Boolean Matrix Addition:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            result[i][j] = matrixA[i][j] || matrixB[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Boolean Matrix Multiplication
    printf("Boolean Matrix Multiplication:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                result[i][j] |= (matrixA[i][k] && matrixB[k][j]);
            }
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}