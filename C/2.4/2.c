#include <stdio.h>
#include <math.h>
#include <assert.h>

int main () 
{ float x1,x2,x4 ;
  char x3;
printf ("Введите выражение , которое хотите подсчитать \n ");
scanf("%f %c %f",&x1 ,&x3 ,&x2 ) ;

if (x3=='+') 
 {x1=x1+x2;
  printf("Сумма этих двух чисел равна=%.3f \n" , x1) ;         }
if (x3=='-')
 { x1=x1-x2;
printf ("Разность этих двух чисел равна %.3f \n" ,x1);}
if (x3=='*')
{x1=x1*x2;
printf ("Произведение этих двух чисел равно %.4f \n",x1);}
if (x3=='/')

{ assert (x2!=0);
x1=x1/x2;
printf ("ЧАстное равно %.3f \n" ,x1);}

 if (x3=='^')
{ x1=pow(x1 ,x2);
printf ("Возведение в степень равно %.3f \n" ,x1);} 
if (x3=='%')
{ assert (x2!=0);
x4=(x1/x2)*100 ;
printf ("Число %.2f составляет %.1f от числа  %.2f \n" ,x1,x4,x2);}
 


return 0 ;
}
