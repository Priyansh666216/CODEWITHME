#include <stdio.h>

int main() {
    double meter, kilometer;

    printf("Enter distance in meters: ");
    scanf("%lf", &meter);

    kilometer = meter / 1000; // Conversion from meters to kilometers

    printf("Distance in kilometers: %.2lf\n", kilometer);

    return 0;
}