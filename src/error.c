#include <stdio.h>

void error(char* classname, int lineint, char* line, char* message) {
    printf("Pyl :%s", classname, ":\n%s",message,"\n%d", lineint, "-%s", line);
}