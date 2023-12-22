
#include <stdio.h>

int main() {
float length, breadth, perimeter, area;

printf("Enter the length of the triangle: ");
scanf("%f", &length);
printf("Enter the breadth of the triangle: ");
scanf("%f", &breadth);

perimeter = 2 * (length + breadth);
area = length*breadth

printf("Perimeter of the triangle: %.2f\n", perimeter);
printf("Area of the triangle: %.2f\n", area);

return 0;
}


