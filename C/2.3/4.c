//Решение квадратного уравнения
#include <stdio.h>
#include <math.h>

int main (void ) 
 { int a,b,c,disc,x1 ,x2 ;
 printf ("Уравнение имеет вид: a*x^2+b*x+c=0 \n ");
 printf ("Введите a \n");
  scanf ("%d" , &a)  ;
 printf ("Введите b \n");
  scanf ("%d" , &b)  ;
 printf ("Введите c \n");
  scanf ("%d" , &c)  ;


if (a!=0)
 { if (b!=0)
  { 
   }
else if (b==0)
      { if ( (c>0)&&(a>0)) 
         {printf("ДАнное уравнение не имеет решения");}
        if (((c>0)&&(a<0))||((c<0)&&(a>0)))
          {x1=(-c/a);
           x1=pow(x1,(1/2));
           x2=-x1;
           printf("РЕшением уравнения является х1=%d и x2=%d ",x1 ,x2);}
        if ((c==0))
          {printf("РЕшением данного уравнения является х=0" );} 




          }
       


            }
                           

      else if (b==0) {printf("Данное уравнение не имеет  решение \n ");} 
  else {x1=-c/b;
      printf ("Данное уравнение не является квадратным ,      однако его решением является х=%d \n",x1 ); } 


/*if (a!=0)
    { if (b!=0)
      { printf("kuku"); 
        }
else printf ("Данное уравнение не имеет решение \n ");
}
else 
{x1=-c/b;
    printf ("Данное уравнение не является квадратным , однако его решением является х=%d \n",x1 ); } */

 return 0 ;
}