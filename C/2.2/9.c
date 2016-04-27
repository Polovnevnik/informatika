#include <string.h>
#include <stdio.h>


int main ()
 {
   int i=0,k=0;
   float sred,kol,n;
   float sum=0;
   char chi[500],ch[500];
   printf("Введите число \n");
   scanf ("%s",chi);
   kol=strlen(chi);
   n=kol;

 while (i<n)
 
   {if (chi[i]!=48) {k=k+1;}
  chi[i]=chi[i]-48;//в число 1 , к примеру , записывается , не как 1 , а как 49

sum=sum+chi[i];
     i=i+1;
      }

  sred=sum/k;
  printf ("Количество цифр в числе = %.0f , сумма всех цифр =%.2f , сренее значение =%.3f \n",kol , sum , sred);
  
  
 return 0;
}
