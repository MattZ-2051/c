#include <stdio.h>

int main(int argc, char *argv[]) {
    /*
    int
    char - 1 byte, 8 bits
    short - 2 bytes, 16 bits
    int - 4 bytes, 32 bits
    long - 8 byte, 64 bits
    */

    // typecasting - converting one type to another

    unsigned int x = 4;
    int sx = (int)(x);

    // signed casting
    int other_var = -1;
    unsigned int x = (unsigned int)other_var;

    /*
    In this example, we cast a negative value to an unsigned value.
    It's important to understand under the hood how signedness will effect the value of this variable in an unsigned fashion.
    For example, -1 becomes MAX_INT in the following value.
     */

    // Up Casting
    short other_var = -1;
    int x = (unsigned int)other_var;

    /*
    When you cast up a variable from one size to a larger size, the signedness comes with it.
    For example, here, despite shorts being 16 bits and integers being 32 bits,
    the value -1 will be sign extended through the larger variable.
     */


}
