#include <stdio.h>
#include <stdlib.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int m, p;

    
    printf("Enter a value for m: ");
    scanf("%d", &m);
    printf("Enter the number of prime numbers greater than m to generate: ");
    scanf("%d", &p);

    if (m < 2) {
        printf("Please enter a value of m greater than or equal to 2.\n");
        return 1; 
    }

    int *prime_array = (int *)malloc(p * sizeof(int));
    if (prime_array == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }

    int count = 0;
    int current_num = m + 1;

    while (count < p) {
        if (is_prime(current_num)) {
            prime_array[count] = current_num;
            count++;
        }
        current_num++;
    }

    printf("Prime numbers greater than %d are:\n", m);
    for (int i = 0; i < p; i++) {
        printf("%d ", prime_array[i]);
    }
    printf("\n");

    free(prime_array);

    return 0;
}