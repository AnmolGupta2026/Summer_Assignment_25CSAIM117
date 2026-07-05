#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student student;

    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNo);

    getchar();

    printf("Enter Name: ");
    fgets(student.name, sizeof(student.name), stdin);

    printf("Enter Marks: ");
    scanf("%f", &student.marks);

    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", student.rollNo);
    printf("Name: %s", student.name);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}