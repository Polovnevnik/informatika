#include <stdio.h>
#include <stdlib.h>
    

void vivod (int c);
int main ()
  { int i1,i2,vr2,vr3,x,y;
    printf (" Здравствуйте. Это игра сапёр  \n");
  int c;
   printf ("Введите размерность игрового поля \n" );
   scanf("%d",&c);
 
 vivod (c);
  

 // RANDOM
   int i, k[c];
   srand(time(0));                          // НА каждую строчку будет приходиться по одной бомбе 
    for (i = 0; i < c; i++)
       {
        k[i] = rand() % (c);
       // printf("%d \n",k[i]);
       
              }
   int mas1[c][c];
    int mas[c][c];
   int vr=0;

// SOZDANIE MASSIVA SODERGASHEGO VSE CIFRI I BOMBI
for (i1=0;i1<c;i1++)
    {
    for (i2=0;i2<c;i2++)
     {   vr=0;
         if (i1==0)
            {   if (i2==0) 
               {  if (i2==k[i1])  mas[0][0]=9;      
                 else { 
                 if (i2+1==k[i1]) vr=vr+1;
                 if (i2+1==k[i1+1]) vr=vr+1;
                 if (i2==k[i1+1]) vr=vr+1;   
                 mas[0][0]=vr;}                                                           
                } 
             if (i2==c) 
              {  if (i2==k[i1])  mas[0][c]=9;      
                 else { 
                 if (i2-1==k[i1]) vr=vr+1;
                 if (i2-1==k[i1+1]) vr=vr+1;
                 if (i2==k[i1+1]) vr=vr+1;   
                 mas[0][c]=vr;}                                                           
            } 
            if ((i2!=0)&&(i2!=c)) 
             { 
               if (i2==k[i1])  mas[0][i2]=9;      
                 else { 
                 if (i2+1==k[i1]) vr=vr+1;
                 if (i2-1==k[i1]) vr=vr+1;
                 if (i2+1==k[i1+1]) vr=vr+1;
                 if (i2-1==k[i1+1]) vr=vr+1;
                 if (i2==k[i1+1]) vr=vr+1;   
                 mas[0][i2]=vr;} 
            }
           }
          

             if (i1==c)
            {   if (i2==0) 
               {  if (i2==k[i1])  mas[c][0]=9;      
                 else { 
                 if (i2+1==k[i1]) vr=vr+1;
                 if (i2+1==k[i1-1]) vr=vr+1;
                 if (i2==k[i1-1]) vr=vr+1;   
                 mas[c][0]=vr;}                                                           
                } 
             if (i2==c) 
              {  if (i2==k[i1])  mas[c][c]=9;      
                 else { 
                 if (i2-1==k[i1]) vr=vr+1;
                 if (i2-1==k[i1-1]) vr=vr+1;
                 if (i2==k[i1-11]) vr=vr+1;   
                 mas[c][c]=vr;}                                                           
            } 
            if ((i2!=0)&&(i2!=c)) 
             { 
               if (i2==k[i1])  mas[c][i2]=9;      
                 else { 
                 if (i2+1==k[i1]) vr=vr+1;
                 if (i2-1==k[i1]) vr=vr+1;
                 if (i2+1==k[i1-1]) vr=vr+1;
                 if (i2-1==k[i1-1]) vr=vr+1;
                 if (i2==k[i1-1]) vr=vr+1;   
                 mas[c][i2]=vr;} 
            }
           }
        if ((i1!=0)&&(i1!=c))
        { if (i2==k[i1])  mas[i1][i2]=9;     
           else 
            {    if (i2+1==k[i1]) vr=vr+1;
                 if (i2-1==k[i1]) vr=vr+1;
                 if (i2+1==k[i1-1]) vr=vr+1;
                 if (i2-1==k[i1-1]) vr=vr+1;
                 if (i2+1==k[i1+1]) vr=vr+1;
                 if (i2-1==k[i1+1]) vr=vr+1;
                 if (i2==k[i1-1])   vr=vr+1;  
                 if (i2==k[i1+1])   vr=vr+1;   
                 mas[i1][i2]=vr;
            } 
          }
        





       if (i2==k[i1]) mas1[i1][i2]=9;
       else mas1[i1][i2]=0;
       }
    }


/*
//Отображает количество бомб в каждой точке и около (не для пользователя)
for (i1=0;i1<c;i1++)
    {
    for (i2=0;i2<c;i2++)
     { 
             printf(" %d ",mas[i1][i2]);
       } printf (" \n");}
*/
printf (" \n");
printf (" \n");


for (i1=0;i1<c;i1++)
    {
    for (i2=0;i2<c;i2++)
     { 
             printf(" %d ",mas1[i1][i2]);
       } printf (" \n");}


   for (;;)
    {printf ("Введите ,пожалуйста , адрес точки , которую хотите открыть \n");
     scanf ("%d %d", &x,&y);
     if(mas[x-1][y-1]==9){printf("\n ЗДесь была бомба. Вы проиграли\n"); break;}
     if (x==5) break;
     if ((mas[x-1][y-1]!=9)&&(mas[x-1][y-1]!=0)) 
       vivod2 (x-1,y-1,c,mas[x-1][y-1])
     {
   } 

 /*(

   for (;;)
    {
    printf ("Введите ,пожалуйста , адрес точки , которую хотите открыть \n");
    scanf ("%d %d", &x,&y);
    printf ("\n %d %d",x,y);

     for (i = 0; i < 5; i++)
       {
         if (mas)    
      }
    

   }*/
   }
}


void vivod (int c)
 { int vr2,vr3,i1,i2;
vr3=1;
  vr2=1;
printf ("    ");
for (i1=0;i1<c;i1++)
    {   vr3=i1+1;
           printf("    x%d",vr3);
            }
printf ("\n");
  for (i1=0;i1<c;i1++)
    {
       
    for (i2=0;i2<c;i2++)
     { 

if (i2==0) {     
        printf ("y=%d  ",vr2);
        vr2++;}
      printf (" | # |");
         }
     printf (" \n");}
  }


    
