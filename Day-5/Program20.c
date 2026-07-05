#include <stdio.h>

int main() {
    int number, largestFactor = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 2; i <= number; i++) {
        while (number % i == 0) {
            largestFactor = i;
            number /= i;
        }
    }

    printf("Largest Prime Factor = %d", largestFactor);

    return 0;
}