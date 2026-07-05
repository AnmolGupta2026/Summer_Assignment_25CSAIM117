#include <stdio.h>

int findMaximum(int a, int b) {
    if (a > b)
        return a;

    return b;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Maximum = %d", findMaximum(a, b));

    return 0;
}