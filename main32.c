#include <stdio.h>
void swapv(int , int);
int main() {
    int a ,b;
    printf("Enter first value > ");
    scanf("%d",&a);
    printf("Enter first value > ");
    scanf("%d",&b);

    swapv(a,b);
    printf("a = %d , b = %d\n",a,b);
    return 0;
}

void swapv(int x , int y){
    int t;
    t = x;
    x = y;
    y = t;
    printf("\na = %d , b = %d\n",x,y);
}