#include <string.h>
#include <stdio.h>


int main ()
 {
   int i=0, sum=0 ,kol,sred;
   char chi[500];
   printf("Введите число \n");
   scanf ("%s",chi);
   kol=strlen(chi);
  

 while (i<kol)
   { sum+=sum+chi[i];
     i=i+1;   }
  sred=sum/kol;
  printf ("Количество цифр в числе = %d , сумма всех цифр =%d , сренее значение =%d \n",kol , sum , sred);
  
  
 return 0;
}
