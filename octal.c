
#include <stdio.h>

int main() {
int num;
printf("Enter an integer: ");
scanf("%d", &num);

int octalNum[100];
int i = 0;
while (num != 0) {
octalNum[i] = num % 8;
num /= 8;
i++;
}

printf("\nOctal equivalent: ");
for (int j = i - 1; j >= 0; j--) {
printf("%d", octalNum[j]);
}


int num1;
printf("\nenter an integer:");
scanf("%d",&num1);

int binarynum[100];
int j =0;

    while (num1 > 0) {
        binarynum[j] = num1 % 2;
        num1 = num1 / 2;
        j++;
    }

    printf("\nBinary equivalent: ");
    for (int k = j - 1; k >= 0; k--) {
        printf("%d", binarynum[k]);
    }





return 0;
}