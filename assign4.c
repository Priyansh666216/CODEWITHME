#include <stdio.h>

int main() {
    float side1, side2, side3;

    
    printf("Enter the lengths of three sides of a triangle:\n");
    scanf("%f %f %f", &side1, &side2, &side3);

    
    if (side1 + side2 > side3) {
        if (side1 + side3 > side2) {
            if (side2 + side3 > side1) {
                printf("A triangle can be formed.\n");

               
                if (side1 == side2 && side2 == side3) {
                    printf("It is an equilateral triangle.\n");
                } else if (side1 == side2 || side1 == side3 || side2 == side3) {
                    printf("It is an isosceles triangle.\n");
                } else {
                    printf("It is neither equilateral nor isosceles; it is a scalene triangle\n");
                }
            } else {
                printf("A triangle cannot be formed with these side lengths.\n");
            }
        } else {
            printf("A triangle cannot be formed with these side lengths.\n");
        }
    } else {
        printf("A triangle cannot be formed with these side lengths.\n");
    }

    return 0;
}