#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void new();
void delet(void);
void search(void);

typedef struct book
  { char firname[25];
    char secname[25];
    char tel[12];
    struct book *sled;
    struct book *pred;
   } book ;


book *begin;
book *end; 
void spismaker(book *ok,  book **begin, book **end);
void spis (book *nach);

int main ()
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
  {  
         scanf("%d",&d);

          if (d==1) { spis(begin);}
          if (d==2) { new();}
/*         if (d==3) {delet();}
          if (d==4) {search();}*/
             if (d==5) 
           {
               printf("Вы закрыли телефонную книгу \n\n");
               exit(0);}
               if ((d<=0)||(d>=7))
               printf ("Вы ввели неправильную команду \n");
       printf ("  Чтобы вызвать весь список контактов , нажмите 1 , затем Enter \n");
      printf ("  Чтобы добавить контакт , нажмите 2 , затем Enter \n");
      printf ("  Чтобы удалить контакт , нажмите 3, затем Enter \n");
      printf ("  Чтобы найти контакт , нажмите 4  , затем Enter \n"); 
      printf ("  Чтобы выйти из программы , нажмите 5 , затем Enter \n");
      
     if (i==1) i=0;}
       
           

return 0;
   }


 void new ()
   {   
       book *kon ;
       int i=0;
       char mas,mas2;
     

     
     if (!(book *)malloc(sizeof (book)))
          { printf ("Исчерпана память");
         return;    }
      kon=(book *)malloc(sizeof (book));
  
     printf("Введите имя . В конце поставьте точку и нажмите Enter,пожалуйста. Если имя содержит 25 букв точку можно не ставить \n");  
      
     do {
      mas =getchar();
      if (i==25){printf("Ввод остановлен . Вы ввели 25 букв.\n");break;}
      if(mas!='.') kon->firname[i]=mas;
      i=i+1;
       
    } while (mas != '.');
              i=0;
  printf("Введите фамилию . В конце поставьте точку и нажмите Enter,пожалуйста. Если имя содержит 25 букв точку можно не ставить \n");  
      
     do {
      mas =getchar();
      if (i==25){printf("Ввод остановлен . Вы ввели 25 букв.\n");break;}
      if(mas!='.') kon->secname[i]=mas;
      i=i+1;
       
    } while (mas != '.');
              i=0;
   


  printf("Если номер меньше 12 цифр после ввода всех цифр введите точку и нажмите Enter \n");  
     do {
      mas2 =getchar();
      if (i==12){break;}
      if(mas2!='.') kon->tel[i]=mas2 ;
      i=i+1;
     
       } while (mas2 != '.');
      spismaker(kon, &begin , &end);
    i=0;
 return;
     }




void spismaker( book *ok, book **begin, book **end)
  {        
        
  book *u;
  book *pre;
    pre=*begin;
        if (!*end)                 //Если до этого связанный список ничего не содержал
         { (*ok).sled==NULL;
          
              *begin=ok;
              *end=ok;   }
     
          u=NULL;

while(pre) {
        if(strcmp(pre->firname, ok->firname)<0) {
            u=pre;
            pre=pre->sled;
        }
        else {
            if(u) {
                u->sled=ok;
                ok->sled=pre;
                return;
            }
            ok->sled=pre;
            
          *begin=ok;
            return;
        }
    }

   
    (*end)->sled=ok;
     ok->sled=NULL;
   *end=ok;
   }                                       


 void spis (book *nach)
  { while (nach)
    {printf(" %s",nach->firname);
    printf("%s    ",nach->secname); 
     printf("%s  \n",nach->tel);
     nach=nach->sled;
    }
   }
     
  


















