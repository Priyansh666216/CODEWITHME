#include <stdio.h>

int fibonacci(int n) {
if (n <= 1)
return n;
else
return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
int n, result;

printf("Enter the number of terms in the Fibonacci series: ");
scanf("%d", &n);

result = fibonacci(n);

printf("The %dth term of the Fibonacci series is: %d\n", n, result);

return 0;
} 