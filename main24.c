#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter number a > ");
    scanf("%d",&a);
    printf("Enter number b > ");
    scanf("%d",&b);
    printf("Enter number c > ");
    scanf("%d",&c);
    if (a>b&&a>c) {
        printf("%d is largest",a);
    }
    if (b>a && b>c) {
        printf("%d is largest",b);
    }
    if (c>a&&c>b) {
        printf("%d is largest",c);
    }
    if (a==b&&a==c){
        printf("All are equal");
    }
    else {
    }
    return 0;
}