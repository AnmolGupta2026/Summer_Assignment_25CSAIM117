#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;

    printf("Enter term number: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("0");
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }

    printf("Nth Fibonacci Term = %d", a);

    return 0;
}