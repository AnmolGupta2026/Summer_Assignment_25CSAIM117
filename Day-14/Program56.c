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

    printf("Duplicate Elements: ");

    for(int i = 0; i < n; i++) {
        int duplicate = 0;

        for(int k = 0; k < i; k++) {
            if(arr[i] == arr[k]) {
                duplicate = 1;
                break;
            }
        }

        if(duplicate)
            continue;

        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    return 0;
}