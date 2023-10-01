#include <stdio.h>
#include <stdlib.h>
#include "executer.h"

int main(int argc, char *argv[]) {
    // if the pyl script wasn't defined it will start shell
    if (argc < 2) {
        printf("\nPyl Programming Language [version a.1.0] [build 2023.09.30]\n");
        char string[256];

        while (1)
        {
            printf(">>>");
            fgets(string, sizeof(string), stdin);
            execute(string);
        }
        return 0;
    } else { // if it's defined then it will start execute
        char *filepath = argv[1];
        FILE *file = fopen(filepath, "r");

        if (file == NULL) {
            printf("Could not open file %s\n", filepath);
            return 1;
        }

        char line[256];
        while (fgets(line, sizeof(line), file)) {
            execute(line);
        }

        fclose(file);
        return 0;
    }
}
