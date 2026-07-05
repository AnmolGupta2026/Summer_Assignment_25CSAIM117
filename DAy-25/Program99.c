#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
};

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    getchar();

    for(int i = 0; i < n; i++) {
        printf("\nEnter Roll Number: ");
        scanf("%d", &students[i].rollNo);

        getchar();

        printf("Enter Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
    }

    printf("\nStudent Records\n");

    for(int i = 0; i < n; i++) {
        printf("Roll Number: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
    }

    return 0;
}