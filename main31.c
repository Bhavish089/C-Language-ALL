#include <stdio.h>
int calsum(int,int,int);
int main() {
    int a,b,c,sum;
    printf("Enter first number > ");
    scanf("%d",&a);
    printf("Enter second number > ");
    scanf("%d",&b);
    printf("Enter third number > ");
    scanf("%d",&c);

    sum = calsum(a,b,c);

    printf("Sum = %d\n",sum);
    return 0;
}

int calsum(int x,int y,int z) {
    int s;
    s = x+y+z;
    return(s);
}