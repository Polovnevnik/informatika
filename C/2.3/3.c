#include <stdio.h>
#include <math.h>

int main (void)
 { int x1,x2,x3,i  ;
printf ("Введите два числа , у которых хотите найти общий делитель : \n");
scanf ("%d %d", &x1,&x2);
i=1;
 if (x1>x2)
  { while (i<=x2) 
    {    if ((x1%i==0)&&(x2%i==0))
         { x3=i;
         }
    i++;
    } 
  }
if (x1<x2)
  { while (i<=x1) 
    {    if ((x2%i==0)&&(x1%i==0))
         { x3=i;
         }
    i++;
    } 
  }
printf ("Наибольший общий делитель числа %d и числа %d есть число  %d \n",x1,x2,x3); 




return 0;
}

