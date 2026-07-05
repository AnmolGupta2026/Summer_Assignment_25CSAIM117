#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d%d", &rows, &cols);

    int matrix[10][10];

    printf("Enter matrix:\n");

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int j = 0; j < cols; j++) {
        int sum = 0;

        for(int i = 0; i < rows; i++) {
            sum += matrix[i][j];
        }

        printf("Column %d Sum = %d\n", j + 1, sum);
    }

    return 0;
}