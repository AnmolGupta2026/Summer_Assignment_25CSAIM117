#include <stdio.h>

int main() {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int index = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    while(index < n) {
        arr[index++] = 0;
    }

    printf("Array After Moving Zeroes: ");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}