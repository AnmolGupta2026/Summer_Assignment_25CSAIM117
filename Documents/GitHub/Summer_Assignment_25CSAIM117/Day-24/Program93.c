#include <stdio.h>

int main() {
    char str1[100], str2[100], temp[100];
    int i = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0') {
        temp[i] = str1[i];
        i++;
    }
    temp[i] = '\0';

    i = 0;
    while (str2[i] != '\0') {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';

    i = 0;
    while (temp[i] != '\0') {
        str2[i] = temp[i];
        i++;
    }
    str2[i] = '\0';

    printf("First String: %s", str1);
    printf("Second String: %s", str2);

    return 0;
}