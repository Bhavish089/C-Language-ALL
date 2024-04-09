#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
    int H=0 , M=0 , S=0 ;
    while (1) {
        system("cls");
        printf("%02d : %02d : %02d ",H,M,S);    
        fflush(stdout);
        S++;
        if(S==60){
            M+=1;
            S=0;
        }
         if(M == 60) {
           H += 1;
           M = 0;
       }
    
       if(H == 24) {
           H = 0;
           M = 0;
           S = 0;
       }

       sleep(1);
    }
    return 0;
}