#include <stdio.h>


void ara (char* x,char* y); //Функция копирования

int main()
{ int i=0,j=0,y=0,k;
char mas,mas1[255],mas2[255],mas3[255];

printf("Введите строку , которую хотите скопировать.Когда закончите писать введите точку(.) и нажмите enter (Скопированная строка печатается без точки) \n");
do {
mas =getchar();
if (mas=='.'){break;}
mas1[i]=mas ;
i=i+1;
} while (mas != '.');
ara (&mas1[0],&mas2[0]);
printf("Скопированная строчка : \n");

for (k=0;k<(i-1);k++) 
 {
printf("%c",mas2[k]);
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



