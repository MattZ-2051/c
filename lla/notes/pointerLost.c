#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

int *allocate() {
    int *pointer = malloc(sizeof(int) * 100);
    return pointer;
}

int main() {

    // this will cause a memory leak because memory is created but we don't assign it to a value here so we can't modify or free it
    // this is more common in C code
    allocate();
    // this would be the correct way
    // int *block = allocate();

    // free(block);

    return 0;
}
