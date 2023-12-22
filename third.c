#include<stdio.h>

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{1, 2}, {3, 4}};
    int row, col;

    for(row=0; row<2; row++) {
        for(col=0; col<2; col++) {
            if(A[row][col] != B[row][col]) {
                printf("Matrices are not equal\n");
                return 0;
            }
        }
    }

    printf("Matrices are equal\n");
    return 0;
}