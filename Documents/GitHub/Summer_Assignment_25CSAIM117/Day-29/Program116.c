#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter initial size: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter elements:\n");

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int newSize;

    printf("Enter new size: ");
    scanf("%d", &newSize);

    arr = (int *)realloc(arr, newSize * sizeof(int));

    printf("Enter additional elements:\n");

    for(int i = n; i < newSize; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Updated Elements: ");

    for(int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}