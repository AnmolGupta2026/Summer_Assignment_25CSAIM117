#include <stdio.h>

int main() {
    char str[100];
    int length = 0, palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    for(int i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            palindrome = 0;
            break;
        }
    }

    if(palindrome)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");

    return 0;
}