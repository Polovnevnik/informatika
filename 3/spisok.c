#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void spis(void);
void new(void);
void delet(void);
void search(void);
typedef struct book
  { char firname[15];
    char secname[15];
    int  tel[12];
    struct book *next;
   } book ;




int main (void)
 {  int i,d;
     
  
      printf ("\n\n");
      printf ("В данной программе вы можете выполнять действия с телефонной книге \n");
      printf ("Список всех действий и то , как их вызвать , представленны ниже : \n"); 
      printf ("  Чтобы вызвать весь список контактов , нажмите 1 , затем Enter \n");
      printf ("  Чтобы добавить контакт , нажмите 2 , затем Enter \n");
      printf ("  Чтобы удалить контакт , нажмите 3, затем Enter \n");
      printf ("  Чтобы найти контакт , нажмите 4  , затем Enter \n"); 
      printf ("  Чтобы выйти из программы , нажмите 5 , затем Enter \n");
        
  
    for (i=0;i<2;i++)
    { scanf("%d",&d);

          if (d==1) { spis();}
          if (d==2) { new();}
 /*         if (d==3) {delet();}
          if (d==4) {search();}*/
             if (d==5) 
           {
               printf("Вы закрыли телефонную книгу \n\n");
               exit(0);}
               if ((d<=0)||(d>=6))
               printf ("Вы ввели неправильную команду \n");
      printf ("  Чтобы вызвать весь список контактов , нажмите 1 , затем Enter \n");
      printf ("  Чтобы добавить контакт , нажмите 2 , затем Enter \n");
      printf ("  Чтобы удалить контакт , нажмите 3, затем Enter \n");
      printf ("  Чтобы найти контакт , нажмите 4  , затем Enter \n"); 
      printf ("  Чтобы выйти из программы , нажмите 5 , затем Enter \n");
       if (i==1) i=0;
        
            }

return 0;
   }


 void new (void)
   {   
      book *kon ;
      book *kon2 ;
       int k =0, t,b;
          if (!(book *)malloc(sizeof (book)))
          { printf ("Исчерпана память");
         return;    }
      kon=(book *)malloc(sizeof (book));

      //char name[20],surname[20];
   //   int [12];
    /*   printf ("Введите имя человека  ");
            fgets(kon->firname,20,stdin); 
      printf ("Введите номер телефона ");
              for (k=0;k<12;k++)
             { scanf("%d",kon2->tel);
               if  }*/
    printf ("Введите имя человека  ");
scanf("%d",&b);
printf ("Введите номер телефона ");
scanf("%d",&t);
printf("%d , %d", t ,b );
      
    }






















 void spis (void)
   {   


   printf ("spis \n");
     }
/* void delet (void)
   {   


   printf ("delet \n");
     }


 void search (void)
   {   


   printf ("search \n");
     }


*/
 
  


















