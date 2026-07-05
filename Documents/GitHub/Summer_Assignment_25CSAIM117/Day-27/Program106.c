#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("sample.txt", "w");

    if(file == NULL) {
        printf("File could not be opened");
        return 0;
    }

    fprintf(file, "Hello, this is a file handling program.");

    fclose(file);

    printf("Data written successfully");

    return 0;
}