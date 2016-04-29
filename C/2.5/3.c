#include <stdio.h>
#include <string.h>

int main (void)
 { int i=0,k,t,j; 
   char mas,mas1[255],mas2[200]={0};
   char iz[]="QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm1234567890`~!@#$%^&*(){}[];'\"\\/,.<>-+=_"; 
    printf("Введите строку .Когда закончите писать введите знак кавычки (выглядят как две верхние запятые  ) и нажмите enter \n");
  do {
   mas =getchar();
   if (mas=='"'){break;}
   mas1[i]=mas ;
   i=i+1;
   } while (mas != '"');
   

   for (k=0;k<i;k++)
    {  
     for (j=0;j<93;j++)
       {  if (iz[j]==mas1[k])
            {mas2[j]=mas2[j]+1;}     
           }
 }
k=i;
printf("Все символы ,встречающиеся в данной строке, в порядке убывания встерчаемости \n ");
 while(k>0)
  { for (t=0;t<93;t++)
   {  if ((mas2[t]>0)&&(mas2[t]==k)) {printf("%c",iz[t]);
                                      printf(" ");}
   } 
  k=k-1;
  }
 printf(" \n");

 return 0;
}
