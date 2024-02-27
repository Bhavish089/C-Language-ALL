#include <stdio.h>

int main() {
    int p , n , r, s;
    printf("Amount of p > ");
    scanf("%d",&p);
    printf("Amount of n > ");
    scanf("%d",&n);
    printf("Amount of r > ");
    scanf("%d",&r);
    s = p*n*r/100;
    printf("s = %d",s);
    return 0;  
}