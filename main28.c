#include <stdio.h>

int main() {
    int i , j; 
    printf("Enter intial value >");
    scanf("%d",&i);
    printf("Enter final value > ");
    scanf("%d",&j);
    do {
        printf("%d\n",i);
        i = i + 1;
    }
    while (i<j);
    return 0;
}