#include <stdio.h>

int main() {
    int n;
    printf("Enter your age > ");
    scanf("%d",& n);
    if (n >= 18) {
        printf("%d your are eligible",n);
    }
    else {
        printf("you are not eligible");
    }
    return 0;
}