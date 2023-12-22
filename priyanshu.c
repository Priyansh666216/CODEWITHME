#include<stdio.h>

int main()
{
    int n = 10;
    int a, b, i;
    int Arr[10] = {22, 33, 11, 55, 88, 77, 44, 66, 99, 0}; 

    printf("Enter the value for the first value: ");
    scanf("%d", &a);

    printf("Enter the value for the second value: "); 
    scanf("%d", &b);

    for (i = 0; i < 10; i++)
    {
        printf("%d ", Arr[i]);
    }
    printf("\nFirst array\n"); 

    Arr[1] = a;
    Arr[2] = b;

    for (i = 0; i < 10; i++)
    {
        printf("%d ", Arr[i]);
    }
    printf("\nSecond array\n"); 

    return 0;
}