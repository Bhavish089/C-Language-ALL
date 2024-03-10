#include <stdio.h>

int main() {
    int y;
    int x = 11;
    y = sizeof(x++);
    printf("%i %i",y,x);
    return 0;
}