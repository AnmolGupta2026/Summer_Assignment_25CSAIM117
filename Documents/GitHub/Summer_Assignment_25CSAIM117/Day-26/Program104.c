#include <stdio.h>

struct Student {
    int rollNo;
    float marks;
};

union StudentData {
    int rollNo;
    float marks;
};

int main() {
    struct Student s;
    union StudentData u;

    printf("Size of Structure = %lu\n", sizeof(s));
    printf("Size of Union = %lu\n", sizeof(u));

    return 0;
}