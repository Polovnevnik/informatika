#include <stdio.h>
#include <math.h>

long long fact  (int n);

 
int main ()
{ int high,igh,b,i,j,t,k;
  
  printf("Введи высоту треугольника Паскаля  " );
  scanf ("%d",&high);
printf(" \n");
  igh=high;
  if (high<5){  for(k=0;k<(high+3);k++)
      {printf("  ");}}
  if ((high>=5)&&(high<10)){  for(k=0;k<(high+5);k++)
      {printf("  ");}}
  if ((high>=10)&&(high<14)){  for(k=0;k<(high+7);k++)
      {printf("  ");}}
  if ((high>=14)&&(high<18)){  for(k=0;k<(high+9);k++)
      {printf("  ");}}
  if ((high>=18)&&(high<=21)){  for(k=0;k<(high+11);k++)
      {printf("  ");}}
    
   

      printf("1 \n");
 
 

 for (i=1;i<high;i++ )

 {  for (j=1;j<igh;j++)  {printf("   ");}
     printf("   ");
   
    for (t=1;t<=i;t++)
    {    if (t==1) 
         {printf("%-5d ", 1);}
      printf ("%-6lld ",(fact(i)/(fact(t)*fact(i-t))));                         
    }
  printf(" \n");
  igh=igh-1;
   
  } 
 printf(" \n");
  
     return 0;
}



long long fact  (int n)
{ int i; 
   long long fac=1;
  for (i=1;i<=n;i++)
  { fac=fac*i;}
  return fac;
}
