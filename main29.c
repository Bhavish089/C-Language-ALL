#include <stdio.h>

int main(){
    int i;
    printf("Enter any number > ");
    scanf("%d",&i);
    switch(i) {
        case 1:
        printf("Au revoir!\n");
        case 2:
        printf("adieu\n");
        case 3:
        printf("Jana");
        default:
        printf("Good bye");
        }
    return 0;
}