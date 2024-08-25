#include <stdio.h>
#include <getopt.h>
#include <stdbool.h>
#include <unistd.h>

#include "../include/file.h"
#include "../include/common.h"
#include "../include/parse.h"

void print_usage(char *argv[]) {
    printf("Usage: %s -n -f <database_file>\n", argv[0]);
    printf("\t -n  - create new database file\n");
    printf("\t -n  - (required) path to database file\n");
    return;
}


int main(int argc, char *argv[]) {

    int c;
    bool newFile = false;
    char *filePath = NULL;
    int dbfd = -1;
    struct dbheader_t *dbhdr = NULL;

    while ((c = getopt(argc, argv, "nf:")) != -1) {
        switch (c) {
            case 'n':
                newFile = true;
                break;
            case 'f':
                filePath = optarg;
                break;
            case '?':
                printf("Unknown variable option -%c\n", c);
                break;
            default:
                return -1;

        }

        if (filePath == NULL) {
            printf("File path is a required arg\n");
            print_usage(argv);
            return 0;
        }
    }

    if (newFile) {
        dbfd = create_db_file(filePath);
        if (dbfd == STATUS_ERROR) {
            printf("Failed to create db file\n");
            return -1;
        }

        if (create_db_header(dbfd, &dbhdr) == STATUS_ERROR) {
            printf("Failed to create db header\n");
            return -1;
        }
    } else {
        dbfd = open_db_file(filePath);
        if (dbfd == STATUS_ERROR) {
            printf("Failed to open db file\n");
            return -1;
        }

        if (validate_db_header(dbfd, &dbhdr) == STATUS_ERROR) {
            printf("Failed to validate db header\n");
            return -1;
        }
    }

    printf("NewFile: %d\n", newFile);
    printf("FilePath: %s\n", filePath);

    output_file(dbfd, dbhdr);
    return 0;
}
