#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d%d", &rows, &cols);

    int a[10][10], b[10][10], result[10][10];

    printf("Enter first matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Result Matrix:\n");

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] - b[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}