#include <stdio.h>
#include <string.h>

int main (void)
{
 int kol,i,k;
 char stroka[5000],udal[5000];
 printf ("VV \n");
 gets(stroka);
 kol=strlen(stroka);
udal[0]=stroka[0];
k=1;
  for (i=1; i<kol; i++) 
 { if (stroka[i-1]!=stroka[i])   
       {  udal[k]=stroka[i];
            k=k+1;  }
  }

printf ("%s \n",udal);

  

return 0;




 }
