#include<stdio.h>

int main()
{
    int n = 10;
    int a, b, i;
    int Arr[10] = {22, 33, 11, 55, 88, 77, 44, 66, 99, 0}; 

int maxIndex = 0;
    int minIndex = 0;

    for (i = 1; i < 10; i++)
    {
        if (Arr[i] > Arr[maxIndex])
        {
            maxIndex = i;
        }
        if (Arr[i] < Arr[minIndex])
        {
            minIndex = i;
        }
    }

    printf("Index of maximum value: %d\n", maxIndex);
    printf("Maximum value: %d\n", Arr[maxIndex]);
    printf("Index of minimum value: %d\n", minIndex);
    printf("Minimum value: %d\n", Arr[minIndex]);

    return 0;
}