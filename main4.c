#include <stdio.h>

int main(){
    int n;
    printf("Value of a > ");
    scanf("%d",& n);
    if (n > 0) {
        printf("Entered value is +ve");
    }
    else {
        printf("Entered value is -ve");
    }
    return 0;
}