#include <stdio.h>
#include <math.h>

int main() {
    double a,b,c,s,area;
    printf("Enter value a > ");
    scanf("%lf",&a);
    printf("Enter value b > ");
    scanf("%lf",&b);
    printf("Enter value c > ");
    scanf("%lf",&c);
    s = (a+b+c) / 2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle = %lf\n",area);
    return 0;
}