#include <stdio.h>
#include <math.h>

int main () 
{ float x1,x2;
  char x3;
printf ("Введите выражение , которое хотите подсчитать ");
scanf("%f %c %f",&x1 ,&x3 ,&x2 ) ;
if (x3=='+') 
 {x1=x1+x2;
  printf("Сумма этих двух чисел равна=%f" , x1) ;         }


return 0 ;
}
