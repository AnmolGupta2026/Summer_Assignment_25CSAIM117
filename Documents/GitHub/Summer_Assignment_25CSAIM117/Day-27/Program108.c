#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("sample.txt", "a");

    if(file == NULL) {
        printf("File could not be opened");
        return 0;
    }

    fprintf(file, "\nThis line is appended to the file.");

    fclose(file);

    printf("Data appended successfully");

    return 0;
}