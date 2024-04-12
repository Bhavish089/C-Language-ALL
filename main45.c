#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    time_t t = time(NULL);
    printf("%ld",t);
    struct tm date =*localtime(&t);
    // printf("Current date is %d-%02d-%02d");
    return 0;
}