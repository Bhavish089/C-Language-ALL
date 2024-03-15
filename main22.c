#include <stdio.h>

int main() {
    int a , b;
    printf("Enter number a > ");
    scanf("%d",&a);
    printf("Enter number b > ");
    scanf("%d",&b);
    if (a > b) {
        printf("A is greater ",a);
    }
    else {
        printf("B is greater ",b);
    }
    return 0;
}