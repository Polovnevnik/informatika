#include <stdio.h> //52.c содержит вспомогательные функции
#include <assert.h>
#include <string.h>
#include "52.c"
 

int main () 
{
	int st,i,j;
        float opred=0,kopred=0,r;
	printf("Введите колличество строк/столбцов квадратной матрицы:\n");
	scanf("%d", &st);
	assert(st>0);
        float masa[st][st],det_with_free;
	
       
 	for (i=0; i<st; i++)
	{
	 for(j=0; j<st; j++)
	 {       
           printf ("Введите элемент матрицы %d,%d :",i+1,j+1);
           scanf("%f", &masa[i][j]);
           }	
	}
             

        float svob[st];
	printf("Введите столбец свободных коэфициентов :\n");
	for (i=0; i<st; i++)
	{ printf ("Свободный коэффициент строчки номер %d =",i+1);
          scanf("%f", &svob[i]);
        }
         printf("\n");
   
         for (i=0; i<st; i++)
	{
	 for(j=0; j<st; j++)
	 {       
           if (j<(st-1))printf ("%.0f*x%d + ",masa[i][j],j+1);
           if (j==(st-1))  printf ("%.0f*x%d ",masa[i][j],j+1);
           
           }	
        printf("= %0.f",svob[i]);          
        printf("\n");
	}
  
       opred=opredel(st,masa);
      
       {printf("Определитель данной матрицы =  %.1f \n",opred);}
 
   printf(" Все неизвестыне иксы :\n");
  for (i=0;i<st;i++)
     { kopred=kofopr(i,st,masa,svob) ;
       r=kopred/opred;
       printf(" x%d = %.0f \n",i+1,r);}
       
              
      
	return 0;
}

