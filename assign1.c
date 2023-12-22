#include <stdio.h>

int main() {
    int choice;
    
    printf("Press 1 : to find size of int\n");
    printf("Press 2 : to find size of float\n");
    printf("Press 3 : to find size of char\n");
    printf("Press 4 : to find size of double\n");
    printf("Press 5 : to find the size of unsigned int\n");
    
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Size of int: %d bytes\n", sizeof(int));
            break;
        case 2:
            printf("Size of float: %f bytes\n", sizeof(float));
            break;
        case 3:
            printf("Size of char: %fbytes\n", sizeof(char));
            break;
        case 4:
            printf("Size of double: %d bytes\n", sizeof(double));
            break;
        case 5:
            printf("Size of unsigned int: %u bytes\n", sizeof(unsigned int));
            break;
        default:
            printf("Invalid choice\n");
    }
    
    return 0;
}