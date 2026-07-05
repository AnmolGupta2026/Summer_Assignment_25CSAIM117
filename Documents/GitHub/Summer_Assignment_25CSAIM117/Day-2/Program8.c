#include <stdio.h>

int main() {
    int number, original, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (number != 0) {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }

    if (original == reverse)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}