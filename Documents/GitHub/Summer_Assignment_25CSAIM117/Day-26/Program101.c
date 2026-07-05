#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

void displayStudent(struct Student s) {
    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student student;

    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNo);

    getchar();

    printf("Enter Name: ");
    fgets(student.name, sizeof(student.name), stdin);

    printf("Enter Marks: ");
    scanf("%f", &student.marks);

    displayStudent(student);

    return 0;
}