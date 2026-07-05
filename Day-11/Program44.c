#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factorial = %lld", factorial(number));

    return 0;
}