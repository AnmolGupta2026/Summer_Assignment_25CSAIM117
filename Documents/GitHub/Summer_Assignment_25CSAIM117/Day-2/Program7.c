#include <stdio.h>

int main() {
    int number, product = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        product *= number % 10;
        number /= 10;
    }

    printf("Product of digits = %d", product);

    return 0;
}