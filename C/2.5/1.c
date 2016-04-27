#include <stdio.h>


void ara (char* x,char* y);
int main()
{ int i=0,j=0,y=0,k=0;
char mas,mas1[255],mas2[255];

printf("Введите строку , которую хотите скопировать.Когда закончите писать введите точку(.) и нажмите enter \n");
do {
mas =getchar();
mas1[i]=mas ;
i=i+1;
k=k+1;
} while (mas != '.');


/*for (j=0;j<k;j++){
ara(&mas1[j],&mas2[j]) ;}
for (j=0;j<k;j++)
 {printf("%c",mas2[j]);}
printf("\n");
ara (mas1,mas2);*/

//while (i=*mas1){printf("kiki");}
printf("Скопированная строчка :");
ara (mas1,mas2);
printf("\n");
return 0;
}
void ara (char * x,char * y)
{ int i=0,j;
do 
{
j=*(x+i);
*(y+i)=*(x+i);
printf("%c",*(y+i));
i=i+1;
}
while (j!='.');}



















/*int p=0;
while(p !='.')
 {
*(y+p)=*(x+p);
if (*(x+p)='.') {break;}
 printf("%c",*(x+p));
 p=p+1;
 } 
}*/
