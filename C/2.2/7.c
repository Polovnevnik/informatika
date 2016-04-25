#include<stdio.h>
int main ()
{ 
 int i,a=413,x=77,c=81,m;
 printf (" Введите длину последовательности\n");
 scanf ("%d",&m);
 printf ("ПОследовательность псевдослучайных чисел\n");
 for (i=1;i<=m;i++)
  { x=(a*x+c)%m;
  printf("%d",x);
  x=x+123;
  c=c+24;}
  printf("\n");
 return 0;
}
