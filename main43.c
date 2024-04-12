#include <stdio.h>
    int main() {
        static char name[] = "Bhavish";
        int i=0;
        while(name[i]!=0){
            printf("%c",name[i]);
            i++;
        }
        return 0;
    }

