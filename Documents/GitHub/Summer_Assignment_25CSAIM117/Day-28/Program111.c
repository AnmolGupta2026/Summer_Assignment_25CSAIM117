#include <stdio.h>

int main() {
    FILE *source, *destination;
    char ch;

    source = fopen("sample.txt", "r");
    destination = fopen("copy.txt", "w");

    if(source == NULL || destination == NULL) {
        printf("File error");
        return 0;
    }

    while((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully");

    return 0;
}