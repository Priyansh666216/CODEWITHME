#include <stdio.h>


void multiplyMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                result[i][j] = mat1[i][k] * mat2[k][j]+result[i][j] ;
            }
        }
    }
}

int main() {
    int matrixA[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrixB[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int resultMatrix[3][3];

   
    multiplyMatrices(matrixA, matrixB, resultMatrix);

    
    printf("Matrix A:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", matrixA[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", matrixB[i][j]);
        }
        printf("\n");
    }

    printf("\nResult Matrix:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}