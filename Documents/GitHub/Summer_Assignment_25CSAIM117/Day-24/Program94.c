#include <stdio.h>
#include <string.h>

int main() {
    int n;

    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar();

    char str[20][100], temp[100];

    for (int i = 0; i < n; i++) {
        fgets(str[i], sizeof(str[i]), stdin);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("Sorted Strings:\n");

    for (int i = 0; i < n; i++) {
        printf("%s", str[i]);
    }

    return 0;
}