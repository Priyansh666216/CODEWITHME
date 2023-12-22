#include <stdio.h>

// Function to add two numbers
   int addnumbers(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num1, num2, result;

    // Input the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Input the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the function to add the numbers
    result = addnumbers(num1, num2);

    // Display the result
    printf("The sum of %.2d and %.2d is: %.2d\n", num1, num2, result);

    return 0;
}