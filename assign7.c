#include <stdio.h>

void calculateSubjectStats(int marks[], int size) {
    int sum = 0;
    int min = marks[0];
    int max = marks[0];

    for (int i = 0; i < size; i++) {
        sum += marks[i];

        if (marks[i] < min) {
            min = marks[i];
        }

        if (marks[i] > max) {
            max = marks[i];
        }
    }

    double average = (double)sum / size;

    printf("Average: %.2lf\n", average);
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
}

int main() {
    int Mathematics[] = {90, 85, 92, 88, 95};
    int Science[] = {78, 82, 80, 85, 88};
    int History[] = {75, 80, 82, 79, 86};
    int Geography[] = {88, 90, 92, 85, 82};
    int English[] = {85, 88, 90, 86, 92};

    printf("Subject-wise statistics:\n");
    printf("Mathematics:\n");
    calculateSubjectStats(Mathematics, 5);

    printf("\nScience:\n");
    calculateSubjectStats(Science, 5);

    printf("\nHistory:\n");
    calculateSubjectStats(History, 5);

    printf("\nGeography:\n");
    calculateSubjectStats(Geography, 5);

    printf("\nEnglish:\n");
    calculateSubjectStats(English, 5);

    return 0;
}