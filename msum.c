#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0; 
    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) {
            sum += matrix[i][j];
        }
    }    
    printf("Sum of the upper triangular elements: %d\n", sum);
    return 0;
}