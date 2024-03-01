#include <stdio.h>
// lef side
int main() {
    int i  , j , r ;
    printf("Enter number of Row > ");
    scanf("%d",&r);
    
    for ( i = 0 ; i < r; ++i) {
        for ( j = 0 ; j <= i ; ++j ) {
            printf(" @ ");
        }
    printf("\n");
    }
    return 0 ;
}
