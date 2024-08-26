#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_EMPLOYEES 1000

struct employee_t {
    int id;
    int income;
    bool staff;
};

void initialize_employee(struct employee_t *e) {
    e->id = 0;
    e->income = 0;
    e->staff = false;

    return;
}

int main() {
    int n = 4;
    // pointer employees points to a number of elements from base element
    struct employee_t *employees = malloc(sizeof(struct employee_t) * MAX_EMPLOYEES);

    if (employees == NULL) {
        printf("The allocater failed");
        return -1;
    }

    initialize_employee(&employees[0]);

    // need to give memory back to the allocator
    // this prevents memory leaks, this is when the memory of the code isn't given back to your os so it causes problems
    free(employees);
    employees = NULL;

}
