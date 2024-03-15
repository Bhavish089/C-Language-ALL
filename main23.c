#include <stdio.h>

int main() {
    int n; 
    printf("Enter a number > ");
    scanf("%d",&n);

    (n % 2 == 0) ?
    (printf("%d is Even number",n)):
    (printf("%d is ODD number",n));
    return 0;
}