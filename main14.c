#include <stdio.h>

int main() {
    int a = 2;
    float y = 2;

    printf("\nSize of (a) = %u bytes ",sizeof a);
    printf("\nSize of (y) = %u bytes ",sizeof y);
    printf("\nAddress of bytes a = %u & y = %u",a,y);
    return 0;
}