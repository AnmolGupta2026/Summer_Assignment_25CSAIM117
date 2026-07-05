#include <stdio.h>

int main() {
    int number = 10;
    int *ptr = &number;

    printf("Value of Number = %d\n", number);
    printf("Address of Number = %p\n", &number);
    printf("Value Using Pointer = %d", *ptr);

    return 0;
}