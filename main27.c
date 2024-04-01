#include <stdio.h>

int main() {
    float r , a1;
    int h,b,a2;
    int s1,s2,s3,a3;
    printf("\nEnter radius of Circle > ");
    scanf("%f",&r);
    a1 = 3.14 * r;
    printf("Area of circle = %f",a1);
    printf("\nEnter Height of rectangle > ");
    scanf("%d",&h);
    printf("Enter Breath of Rectangle > ");
    scanf("%d",&b);
    a2 = h * b;
    printf("Area of Rectangle = %d" ,a2);
    printf("\nEnter length of side-1 of triangle a > ");
    scanf("%d",&s1);
    printf("Enter length of side-2 of triangle b > ");
    scanf("%d",&s2);
    printf("Enter length of side-3 of triangle c > ");
    scanf("%d",&s3);
    a3 = s1+s2+s3;
    printf("Area of Triangle = %d",a3);
    return 0;
}