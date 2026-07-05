#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee employee;

    printf("Enter Employee ID: ");
    scanf("%d", &employee.id);

    getchar();

    printf("Enter Employee Name: ");
    fgets(employee.name, sizeof(employee.name), stdin);

    printf("Enter Salary: ");
    scanf("%f", &employee.salary);

    printf("\nEmployee Details\n");
    printf("ID: %d\n", employee.id);
    printf("Name: %s", employee.name);
    printf("Salary: %.2f\n", employee.salary);

    return 0;
}