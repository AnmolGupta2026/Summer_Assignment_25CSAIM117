#include <stdio.h>

union Data {
    int number;
    float value;
};

int main() {
    union Data data;

    data.number = 100;
    printf("Integer Value = %d\n", data.number);

    data.value = 45.75;
    printf("Float Value = %.2f\n", data.value);

    return 0;
}