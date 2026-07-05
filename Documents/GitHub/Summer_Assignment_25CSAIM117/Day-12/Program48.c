#include <stdio.h>

int isPerfect(int n) {
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }

    return sum == n;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPerfect(number))
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");

    return 0;
}