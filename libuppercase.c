// libary function uppercase
#include <stdio.h>
#include <ctype.h>
int main ()
{
    char lower , upper;
   
     printf("Enter a lower case char :");
     scanf("%c",&lower);
     upper = toupper(lower);
     printf("Uppercase is = %c \n", upper);
}