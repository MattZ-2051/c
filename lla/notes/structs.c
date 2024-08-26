#include <stdio.h>
#include <stdbool.h>

#define MAX_EMPLOYEES 1000

struct employee_t {
    int id;
    char firstname[64];
    char lastname[64];
    float income;
    bool ismanager;
};

int main() {
    int i = 0;
    struct employee_t employees[MAX_EMPLOYEES];
    for (i = 0; i < MAX_EMPLOYEES; i++) {
        employees[i].income = 0;
    }

    return 0;
}
