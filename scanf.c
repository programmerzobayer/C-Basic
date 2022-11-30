#include <stdio.h>
int main()
{
    char firstch ;
    int num ;
    float num2 ;
    printf ("Enter a Three value :");
    scanf("%c %d %f",&firstch, &num , &num2);
    printf("Name: %c\nAge: %d\nHeight: %.1f \n",firstch,num ,num2);
}