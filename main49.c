//Checking the input letter is uppercase or lowercase using switch case
#include <stdio.h>
int main(void)
{
char i;
printf("Enter a character: \n");
scanf("%c",&i);
switch(i)
{
case 'A'...'Z':
printf("Upper case character\n");
break;
case 'a'...'z':
printf("Lower case character\n");
break;
case '0'...'9':
printf("Digit \n" );
break;
default:
printf("Special character\n");
}
return 0;
}
