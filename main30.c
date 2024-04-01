#include <stdio.h>

int main() {
    int i;
    for (i=1;i<=5;i++){
        if(i*i > 121 ) {
        goto there;
        }
        else {
            printf("%d\n",i);
        }
    }
    there:
       printf("Max Limit");
    return 0;
}