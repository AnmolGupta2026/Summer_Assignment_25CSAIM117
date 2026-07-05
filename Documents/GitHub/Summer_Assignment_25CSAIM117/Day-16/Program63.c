#include <stdio.h>

int main() {
    int n, target, found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("Pair: %d %d", arr[i], arr[j]);
                found = 1;
                break;
            }
        }

        if(found)
            break;
    }

    if(!found)
        printf("No Pair Found");

    return 0;
}