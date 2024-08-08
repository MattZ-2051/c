#include <stdio.h>

#define MAX_EMPLOYEES 1000

// makes sure that there is not additional padding or modification of struct in memory when using on different systems
__attribute__((__packed__)) struct employee_t {
    int id;
    char firstname[64];
    char lastname[64];
    float income;
};

// int main() {

//     return 0;
// }
