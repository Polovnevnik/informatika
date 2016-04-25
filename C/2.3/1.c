#include <stdio.h>
#include <string.h>

int main (void)
 { int k,i;
    char x;
   char stroka[5000];
    printf ("Введите любую строчку \n");
    gets(stroka);
    k=strlen(stroka);
    x=stroka[0];
    for (i=1;i<k;i++)
    { 
     if (x<stroka[i]){x=stroka[i];}     
    }
    


printf ("Наибольший ASCII код имеет символ %c \n",x);

  return 0;
 
 }
