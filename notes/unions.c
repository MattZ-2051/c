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

// unions will create enough room for the biggest element
// you are allowed to access all the sub elements
// unions are used more in embedded programming
union myunion {
    int x;
    char c;
    short s;
};

int main() {
    struct employee_t employees[MAX_EMPLOYEES];

    union myunion u;
    u.x = 0x41424344;


    return 0;
}
