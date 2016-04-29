#include <stdio.h>


void ara (char* x,char* y); //Функция копирования
void rar (char* x,char* y);//ФУнкция инвертирования
int main()
{ int i=0,j=0,y=0,k,t;
char mas,mas1[255],mas2[255],mas3[255];

printf("Введите строку , которую хотите скопировать.Когда закончите писать введите точку(.) и нажмите enter (Все остальные строчки печатаются без точки ) \n");
do {
mas =getchar();
mas1[i]=mas ;
i=i+1;
} while (mas != '.');
ara (&mas1[0],&mas2[0]);
rar (&mas1[0],&mas3[0]);
printf("Скопированная строчка : \n");

   for (k=0;k<(i-1);k++) 
    {
    printf("%c",mas2[k]);
   }
 printf("\n");

 printf("Инвертированная строчка : \n");

    for (t=1;t<i;t++) 
 {
   printf("%c",mas3[t]);
   }

 printf("\n");

return 0;
}
void ara (char * x,char * y)
{ int i=0,j;
do 
{
j=*(x+i);
*(y+i)=*(x+i);
i=i+1;
}
while (j!='.');
}

void rar (char * x,char * y)
{ int i=0,q=0,w,j;
   j=*x;
   do 
{
j=*(x+i);
i=i+1;
}
while (j!='.');
 i=i-1;
   for (w=i;w>=0;w--)
     { *(y+q)=*(x+w);
        q=q+1;
      } 
}
 





