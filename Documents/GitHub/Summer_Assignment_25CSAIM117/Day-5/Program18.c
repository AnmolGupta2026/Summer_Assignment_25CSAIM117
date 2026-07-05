#include <stdio.h>

int main() {
    int number, original, digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (number != 0) {
        digit = number % 10;

        int factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }

        sum += factorial;
        number /= 10;
    }

    if (sum == original)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}