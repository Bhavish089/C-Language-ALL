#include <stdio.h>

int main() {
    int row;
    printf("Number of Number > ");
    scanf("%d",&row);
    for (int i=0;i<=row;i++){
        for(int j=0;j<2*(row-i)-1;j++) {
            printf(" ");
        }
        for (int k=0;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}