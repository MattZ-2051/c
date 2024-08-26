#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

void func1() {int y = 10;}
void func2() {int z = 15;}

int main() {
    int *data;

    // size_t come from stdlib it is the type that malloc accepts
    size_t data_size = sizeof(int) * 1000000000000;

    int iterations = 0;

    while(true) {
        data = malloc(data_size);

        if (data == NULL) break;
        iterations++;

        printf("iterations %d\n", iterations);
        // this will prevent memory leaks since we free the memory here
        // free(data);
        // sleep(1);
    }

    printf("malloc failed. \n");

    return 0;
}
