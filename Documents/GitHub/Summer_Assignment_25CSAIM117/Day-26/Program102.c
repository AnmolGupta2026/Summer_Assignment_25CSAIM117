#include <stdio.h>

struct Address {
    char city[50];
    char state[50];
};

struct Student {
    int rollNo;
    char name[50];
    struct Address address;
};

int main() {
    struct Student student;

    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNo);

    getchar();

    printf("Enter Name: ");
    fgets(student.name, sizeof(student.name), stdin);

    printf("Enter City: ");
    fgets(student.address.city, sizeof(student.address.city), stdin);

    printf("Enter State: ");
    fgets(student.address.state, sizeof(student.address.state), stdin);

    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", student.rollNo);
    printf("Name: %s", student.name);
    printf("City: %s", student.address.city);
    printf("State: %s", student.address.state);

    return 0;
}