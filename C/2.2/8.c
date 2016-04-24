#include <stdio.h>


int main ()
 {
     
   float pi=3.141592,g=9.78 , ugol,v0,t,sin; // pi и g -константы
   printf ("Введите угол в градусах , под которым брошен камень\n");
    scanf  ("%f",&ugol);
   printf ("Введите его начальную скорсть\n");
    scanf ("%f", &v0);
   ugol=ugol*pi/180; // Перевод из градусов в радианы 
   sin=ugol - (ugol*ugol*ugol/6) + (ugol*ugol*ugol*ugol*ugol/120)- (ugol*ugol*ugol*ugol*ugol*ugol*ugol/5040); //Разложение sin в ряде тейлора 
   t=2*v0*sin/g;
  printf (" Время полёта камня в секундах %.2f \n", t);
  return 0;
  }
  
