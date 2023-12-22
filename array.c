#include <stdio.h>

int main() {
    int average;
    int numStudents = 7;  
    int marks[] = {1, 2, 3, 4, 5, 6, 7};  
    int sum = 0;
    int lowest = marks[0];
    int highest = marks[0];

    
    for (int i = 0; i < numStudents; i++) {
        sum += marks[i];
        if (marks[i] < lowest) 
        lowest = marks[i];
        if (marks[i] > highest) 
        highest = marks[i];
    }

    
   average = sum / numStudents;
   printf(marks);
   

   
    printf("Average marks: %d\n", average);
    printf("Lowest marks: %d\n", lowest);
    printf("Highest marks: %d\n", highest);

    return 0;
}