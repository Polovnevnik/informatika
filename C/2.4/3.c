#include <stdio.h>

int fibonachi(int n);
int main ()
 { int n,k,i;
   printf ("Введите число первых элементов таблицы фибоначи, которых вы хотите увидеть (0 учитывается) \n");
   scanf ("%d",&n);
 
  if (n>0) { for (i=0;i<n;i++)
    { printf("  %d ",fibonachi(i));}}
  if (n<0) {for (i=0;i>n;i--)
             {printf("  %d ",fibonachi(i));}  }
  if (n=0) {printf("0");}
  printf("\n");
 return 0;
} 

int fibonachi (int n )
 { if (n==0) {return 0;}
   if ((n==1)||(n==(-1))) {return 1;}
   if (n>1 ) {return fibonachi(n-1)+fibonachi(n-2);}
   if (n<1)  {return -fibonachi(n+1)+fibonachi(n+2);}
  
 }
