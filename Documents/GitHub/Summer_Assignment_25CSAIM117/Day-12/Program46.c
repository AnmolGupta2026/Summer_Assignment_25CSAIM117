#include <stdio.h>

int isArmstrong(int n) {
    int original = n, sum = 0;

    while (n != 0) {
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    return original == sum;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}