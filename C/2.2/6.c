#include <stdio.h>

int main (void)
  { long long rez ;
    int chi,i;
   printf ("Введите число , факториал которого хотите подсчитать(Оно не должно превышать 20) \n");// Тип long long уже не вместит факториал 21
   scanf ("%d", &chi);
   i=1;
   rez=1;
   while (i<=chi)
  { rez=rez*i ;
    i=i+1;     } 
  printf(" Факториал числа %d равен   %lld \n" ,chi,rez) ;

return 0;
}
