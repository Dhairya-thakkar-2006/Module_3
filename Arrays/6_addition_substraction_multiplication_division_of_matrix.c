#include <stdio.h>

int main() {
    int rows, cols, i, j, k;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols];
    int resultAdd[rows][cols], resultSub[rows][cols];
    int resultMul[rows][cols];

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Addition of matrices
    printf("Matrix after addition:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            resultAdd[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d ", resultAdd[i][j]);
        }
        printf("\n");
    }

    // Subtraction of matrices
    printf("Matrix after subtraction:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            resultSub[i][j] = matrix1[i][j] - matrix2[i][j];
            printf("%d ", resultSub[i][j]);
        }
        printf("\n");
    }

    // Multiplication of matrices
    printf("Matrix after multiplication:\n");
    // Initialize resultMul matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            resultMul[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            for (k = 0; k < cols; k++) { // Assuming square matrices, use the same `cols` for iteration
                resultMul[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print result of multiplication
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", resultMul[i][j]);
        }
        printf("\n");
    }

	
}

