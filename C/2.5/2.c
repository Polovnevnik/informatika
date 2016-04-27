#include <stdio.h>


void ara (char* x,char* y); //Функция копирования
void rar (char* x,char* y);//ФУнкция инвертирования
int main()
{ int i=0,j=0,y=0,k=0;
char mas,mas1[255],mas2[255],mas3[255];

printf("Введите строку , которую хотите скопировать.Когда закончите писать введите точку(.) и нажмите enter (Все остальные строчки печатаются с этой точкой ) \n");
do {
mas =getchar();
mas1[i]=mas ;
i=i+1;
k=k+1;
} while (mas != '.');
printf("Скопированная строчка : \n");


ara (mas1,mas2);
printf("\n");
printf("Инвертированная строчка : \n");
rar (mas1,mas3);
printf("\n");

return 0;
}
void ara (char * x,char * y)
{ int i=0,j;
do 
{
j=*(x+i);
*(y+i)=*(x+i);
printf("%c",*(x+i));
i=i+1;
}
while (j!='.');
}

void rar (char * x,char * y)
{ int i=0,k=0,q=0,w,j;
   j=*x;
   do 
{
j=*(x+i);
i=i+1;
k=k+1;
}
while (j!='.');
printf("%d \n",i);
 i=i-1;
   for (w=i;w>=0;w--)
     { *(y+q)=*(x+w);
       printf("%c",*(y+q));
       q=q+1;
      } 
}
 





