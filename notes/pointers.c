#include <stdio.h>
#include <stdbool.h>

struct Employee {
    int id;
    float income;
    bool staff;
};

void initialize_employee(struct Employee *e) {
    e->id = 0;
    e->income = 0;
    e->staff = false;
    return;
}

// a pointer is just a value that points to an address
// pointers are useful to modify variables that are out of scope
int main() {


    int x = 3;

    // this statement creates a pointer pX that points to the memory address of x
    int *pX = &x;

    struct Employee Ralph;
    // here we pass a reference to Ralph in the function so our function that points to the param can modify it
    initialize_employee(&Ralph);
    return 0;
}
