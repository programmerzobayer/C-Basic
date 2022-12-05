#include <stdio.h>
int main ()
{
    int num1 , num2 ,plus , minus,count;
    float Float, theEnd;
    printf("Enter a two number: ");
    scanf("%d %d",&num1,&num2);

    plus = num1 + num2 ; 
    printf("plus is %d \n", plus);

    minus = num1 - num2 ; 
    printf("minus is %d \n", minus);

     count = num1 * num2 ; 
    printf("count is %d \n", count);

      Float = (float)num1 / num2 ; 
    printf("Float is %2.f \n", Float);

    theEnd = num1 % num2 ;
    printf("Reminder is %2.f \n", theEnd);
    
    return 0 ;
}