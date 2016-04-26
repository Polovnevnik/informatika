#include <stdio.h>
#define m(x,y) if(x>y){printf("%d \n",x);} else printf("%d \n",y);

int main ()
 { int n,i,y=150,a=203,x=77,c=81,m1=51,m2=101;
  printf("Введите количество пар \n");
  scanf("%d",&n);
  for (i=0;i<n;i++)
   { 
     x=(a*x+c)%m1;
     a=a+45; c=c+100;
     y=(a*y+c)%m2;
      printf ("Для пары номер %d, состоящий из числа %d и %d, наибольшим является число ",i+1,x,y);
  m(x,y);
     }
return 0;
}
  
     
