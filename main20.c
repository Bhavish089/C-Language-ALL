#include <stdio.h>
int main() {
    int h, m, s;
    printf("Input seconds > ");
    scanf("%d", & s);
    h = (s/3600); 
    m = (s -(3600*h))/60;
    printf("Hours = %d\n",h);
    printf("Minutes = %d\n",m);
    printf("Seconds = %d\n",s);
    return 0;
}