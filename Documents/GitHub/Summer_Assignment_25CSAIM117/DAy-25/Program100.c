#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n], temp;

    getchar();

    for(int i = 0; i < n; i++) {
        printf("\nEnter Roll Number: ");
        scanf("%d", &students[i].rollNo);

        getchar();

        printf("Enter Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);

        getchar();
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(students[i].marks < students[j].marks) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\nStudents Sorted by Marks\n");

    for(int i = 0; i < n; i++) {
        printf("%d %s%.2f\n",
               students[i].rollNo,
               students[i].name,
               students[i].marks);
    }

    return 0;
}