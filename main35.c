#include <stdio.h>
#include <stdlib.h>

int main(){
    int number =0;
    printf("Enter number > ");
    scanf("%d",&number);
    switch (number){
    case 10:
        printf("equal to 10");
        break;
    case 50:
    printf("equal to 50");
        break;
    default:
    printf("is not equal to 10 , 50 ,100");
    break;
    }
    return 0;
}