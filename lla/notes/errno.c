#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
    int file = open("./file-thatdoesntexist", O_RDONLY);
    if (file == -1) {
        perror("open");
        return -1;
    }
}
