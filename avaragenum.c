#include <stdio.h>
int main ()
{
    int a,b,c,sum ;
    float avg ;
    printf("Enter a Three number :");
    scanf("%d %d %d",&a, &b, &c);
    sum = a+b+c ;
    printf("Sum is %d \n", sum);
    avg = (float)sum / 3 ;
    printf("Average is %f \n", avg);
    return 0 ;

}