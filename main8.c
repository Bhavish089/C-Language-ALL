#include <stdio.h>
int main() {
    int i, a;
    printf("Value of a > ");
    scanf("%d",&a);
    printf("Print all odd no . from %d:\n",a);
    for (i=1;i<=a; i++) {
        if (i %2!=0){
            printf("%d\n",i);
        }
    }   
    return 0;
}