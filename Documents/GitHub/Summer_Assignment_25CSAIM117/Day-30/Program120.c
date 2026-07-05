#include <stdio.h>

int main() {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter array elements:\n");

    for(int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    printf("Array Elements: ");

    for(int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}