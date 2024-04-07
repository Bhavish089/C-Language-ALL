#include <stdio.h>

int main() {
    int n , i = 0 , m;
    printf("Enter number for tables > ");
    scanf("%d",&n);
    do {
        i++;
        m = n*i;
        printf("%d * %d = %d\n",n,i,m);
    }
    while(i<=10);
    return 0;
}