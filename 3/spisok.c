#include <stdio.h>
#include <stdlib.h>



void find(void);


int main ()
 {  int i,d;
     
  typedef struct book
  { char firname[15];
    char secname[15];
    int  tel;
    struct book *next;
   } book ;
    
      printf ("В данной программе вы можете выполнять действия с телефонной книге \n");
      printf ("Список всех действий и то , как их вызвать , представленны ниже : \n"); 
  
    for (i=0;i<100000;i++)
    {  printf ("  Чтобы вызвать весь список контактов , нажмите 1 , затем Enter \n");
      printf ("  Чтобы добавить контакт , нажмите 2 , затем Enter \n");
      printf ("  Чтобы удалить контакт , нажмите 3, затем Enter \n");
      printf ("  Чтобы найти контакт , нажмите 4  , затем Enter \n"); 
      printf ("  Чтобы выйти из программы , нажмите 5 , затем Enter \n");
        scanf("%d",&d);
               if (d==5) {
               printf("Вы закрыли телефонную книгу \n");
               exit(0);}
               if ((d<=0)||(d>=6))
               printf ("Вы ввели неправильную команду \n");
       }





return 0;
   }
