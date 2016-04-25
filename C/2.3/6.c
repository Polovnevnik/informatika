#include <stdio.h>

int main ( )
  { int x ,i;
   printf ("Введите прогресс в процентах от 0 до 100 \n ");
  scanf ("%d",&x);
if ((x>=0)&&(x<=100))
{
   printf("[");
  for (i=0;i<x;i=i+2)
  { printf("#");}
  printf("] \n");
  printf("Каждый знак '#' равен двум процентам \n");
}
else printf("Некоректный ввод данных \n");
return 0;
}
