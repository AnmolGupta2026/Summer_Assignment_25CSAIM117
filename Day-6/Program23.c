#include <stdio.h>

int main() {
    int number, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        if (number % 2 == 1) {
            count++;
        }
        number /= 2;
    }

    printf("Set Bits = %d", count);

    return 0;
}