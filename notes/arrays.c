#include <stdio.h>

#define MAX_IDS 32 // define preprocessor commands with # (it is good practice to define array lengths like this)

int main () {
    // we have to define length of array at start
    // int ids[MAX_IDS]; // we can define it like this
    // int ids[] = {1,2,3}; // or let the compiler infer by setting it to a value like this
    int ids[MAX_IDS] = {1,2,3};


    // create an array of 10 integers
    int myarray[10] = {1,2,3,4,5,6,7,8,9,10};

    // set the 4th element to 2
    myarray[4] = 2;

    // print the 4th element
    printf("%d\n", myarray[4]);

    return 0;
}
