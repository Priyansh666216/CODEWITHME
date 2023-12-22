#include <stdio.h>

#include <string.h>

int main() {

    char source[] = "Hello, World!";

    char destination[20];

    strncpy(destination, source, 5);

    destination[5] = '\0';  // Ensure null-termination

    printf("strncpy(): %s\n", destination);

    return 0;

}