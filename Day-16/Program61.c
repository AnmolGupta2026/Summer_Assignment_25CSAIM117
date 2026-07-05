#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter elements:\n");

    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int expectedSum = n * (n + 1) / 2;

    printf("Missing Number = %d", expectedSum - sum);

    return 0;
}