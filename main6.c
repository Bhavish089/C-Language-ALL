#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter numbers a > ");
    scanf("%d", &a);
    printf("Enter Number b > ");
    scanf("%d",&b);
    
    c = a;
    a = b;
    b = c;
    printf("\nAfter swapping:\n");
    printf("a = %d\nb = %d\n", a, b);
    return 0;
}
