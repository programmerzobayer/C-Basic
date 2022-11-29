#include <stdio.h>
int main ()
{
  int mark ;
  printf("Enter Mark Number : ");
  scanf("%d", &mark);
  if(mark>=80 && mark<100){
  printf("You got A+ \n");
  }
  else if(mark>=70 && mark<80){
    printf("You got A\n");
  }
  else if(mark>=60 && mark<70){
    printf("You got A-\n");
  }
  else if(mark>=50 && mark<60){
    printf("You got B\n");
  }
  else if(mark>=40 && mark<50){
    printf("You got c\n");
  }
  else if(mark>=33 && mark<40){
    printf("You got D \n");
  }
  else{
    printf("Failed \n") ;
  }

return 0 ;
}