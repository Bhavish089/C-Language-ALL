#include <stdio.h>
#include <conio.h>

int main() {
    int y,z;
    printf("Choose calculator type \n1.Basic\n2.Advance\ntype > ");
    scanf("%d",&y);
    if (y==1) {
        int n;
        printf("\n\t\t\tChoose your mode :-\n\t1.Addition - 1\n\t2.Substract- 2\n\t3.Multiply - 3\n\t4.Division - 4\n\n\tType > ");
        scanf("%d",& n);
        if (n == 1) {
            int a , b , c;
            printf("\nFirst number > ");
            scanf("%d",&a);
            printf("Second Number > ");
            scanf("%d",&b);
            c = a + b;
            printf("Addtion of First and second number = %d",c);
        }
        if (n == 2) {
            int d, e, f;
            printf("\nFirst number > ");
            scanf("%d",&d);
            printf("Second Number > ");
            scanf("%d",&e);
            f = d - e;
            printf("Substraction of First and second Number = %d",f);
        }
         if (n == 3) {
            int g, h, i;
            printf("\nFirst number > ");
            scanf("%d",&g);
            printf("Second Number > ");
            scanf("%d",&h);
            i = g * h;
            printf("Multiplication of First and second Number = %d",i);
        }
        if (n == 4) {
            int j, k, l;
            printf("\nFirst number > ");
            scanf("%d",&j);
            printf("Second Number > ");
            scanf("%d",&k);
            l = j % k;
            printf("Division of First and second Number = %d",l);        
        }
    }
        else {
        }
    if (y==2) {
        printf("\n\t\t\tChoose your mode\n\t1.Greater Equal to\n\t2.Inverse Equal to\n\t3.Alpha-numberic\n\t4.Check Greaterness\n\tType > ");
        scanf("%d",&z);
        if (z == 1) {
            int m,o,p;
            printf("\n First Number > ");
            scanf("%d",&m);
            printf("Second Number > ");
            scanf("%d",&o);
            p = m>= o;
            printf("p = %d",p);
        }
        if (z == 2) {
        }
        if (z == 3) {
            //Alpha Numberic 
        }
        if (z==4) {
            int s , t ;
            printf("\n First number > ");
            scanf("%d",&s);
            printf("Second number > ");
            scanf(("%d",&t);
            if ( s < t) {
                printf("First number is greater than Second number");
            }
           if ( t < s ) {
                prinf("Second number is reater than First number");
        }
    }
    return 0;
}
