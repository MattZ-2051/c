#include <stdio.h>

#define MAX_IDS 32

int main() {
    // a string under the hood is just an array of char
    char mystr[] = {'h', 'e', 'l', 'l', 'o', 0}; //valid string, it is important to null terminate strings
    char *myotherstr = "hello"; // also a valid string, the compiler automatically null terminates when you use ""
    printf("%s", mystr);

    // strcpy(dest, src) will run the operation until it finds string null bytes

    // Excercise
    char *str = "hehe";

    // create the same string
    // as a character array
    char otherstr[] = {'h', 'e', 'h', 'e', 0} ;

    if (!strcmp(str, otherstr)) {
        printf("Yay!\n");
    } else {
        printf("Nay!\n");
    }

    return 0;
}
