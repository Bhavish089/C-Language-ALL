#include <stdio.h>

int main() {
    int i,j;
    printf("Enter number for Table > ");
    scanf("%d",&i);
    do {
        j=1;
        do {
            printf("%d*%d=%d\n",i,j,i*j);
            j++;
        }
        while(j<=10);
        i++;
    }
    while(j<=2);
    return 0;
}