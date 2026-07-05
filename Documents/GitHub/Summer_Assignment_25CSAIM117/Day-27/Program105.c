#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("sample.txt", "w");

    if(file == NULL) {
        printf("File could not be created");
        return 0;
    }

    printf("File created successfully");

    fclose(file);

    return 0;
}