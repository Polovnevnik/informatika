#include <stdio.h>
#include <string.h>

int main (void)
 { int kol,i;
   char str[5000];
   printf("Введите буквы,увеличить регистр которых вы хотите  \n");
   scanf("%s",str);
   kol=strlen(str);
   i=0;
   while (i<kol)
    { str[i]=str[i]-32;//-32 , так как все большие буквы в таблице ASCII меньше соответсвующих маленьких букв на 32
      i=i+1; }
     printf("%s \n",str);
   return 0;
  }
