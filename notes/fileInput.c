#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

struct database_header_t {
    unsigned short version;
    unsigned short employees;
    unsigned int filelength;
};

int main (int argc, char *argv[]) {

    struct database_header_t head = {0};

    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 0;
    }

    int fd = open(argv[1], O_RDWR | O_CREAT, 0644);

    if (fd == -1) {
        perror("open");
        return -1;
    }

    if (read(fd, &head, sizeof(head) != sizeof(head))) {
        perror("close");
        close(fd);
        return -1;
    }

    close(fd);

    return 0;
}
