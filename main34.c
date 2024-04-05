#include <stdio.h>
#include <stdlib.h>

int main() {
    int a , b, ch;
    printf("\n\bMain Menu");
    printf("\n1.Add\n2.Sub\n3.Multi\n4.Division\n5.Exit\n Type > ");
    scanf("%d",&ch);
    switch (ch){
        case 1:
            printf("\nFirst number > ");
            scanf("%d",&a);
            printf("Second Number > ");
            scanf("%d",&b);
            printf("Sum = %d",a+b);
            break;
        case 2:
            printf("\nFirst number > ");
            scanf("%d",&a);
            printf("Second Number > ");
            scanf("%d",&b);
            printf("Sub = %d",a-b);
            break;
        case 3:
            printf("\nFirst number > ");
            scanf("%d",&a);
            printf("Second Number > ");
            scanf("%d",&b);
            printf("Multi = %d",a*b);
            break;
        case 4:
            printf("\nFirst number > ");
            scanf("%d",&a);
            printf("Second Number > ");
            scanf("%d",&b);
            printf("Division = %d",a%b);
            break;
        case 5:
            exit;
        default:
            printf("Invalid Input");
    }
    return 0;
}