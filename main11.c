#include <stdio.h>

int main() {
    int a ,b, c;
    printf("Enter number a > ");
    scanf("%d",&a);
    printf("enter number b > ");
    scanf("%d",&b);
    printf("the value of = %d\n",c=a+b);
    printf("the value of = %d\n",c=a+=b);
    printf("the value of = %d\n",c=a-=b);
    return 0 ;
}