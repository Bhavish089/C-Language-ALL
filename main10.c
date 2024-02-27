#include <stdio.h>

int main() {
    int a , b ;
    printf("enter number a > ");
    scanf("%d",&a);
    printf("enter number b > ");
    scanf("%d",&b);
    printf("%d\n",(a<b)&&(a!=b));
    printf("%d\n",(a<b)||(b<a));
    printf("%d\n",(a==b));

    return 0;
}