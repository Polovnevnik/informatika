#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int main ()
  {  int i=0,j=0,t=0,k=0,r;
      char mas[5000],mas1[5000];
     FILE *f;
    FILE *o;
    f=fopen("ishod.txt","r");
    o=fopen("vich.txt","w"); 
    fscanf(f,"%s",mas);
    r=strlen (mas);
    char  key[]="11244179"; 


    for (i=0;i<r;i++)
     {  if (j==8){j=0;}
         mas1[i]=mas[i]^key[j];
         j=j+1;
     } 
        mas1[r]='\0';
     fprintf(o,"Зашифровка :\n");
     for (i=0;i<r;i++)
          {
	   fprintf(o,"%c",mas1[i]);}
      
  
              j=0;    
           fprintf(o,"\n Расшифровка :\n");
          for (i=0;i<r;i++)
          {  if (j==8){j=0;}
             mas[i]=mas1[i]^key[j];
             j=j+1;
     } 
            for (i=0;i<r;i++)
          {
	   fprintf(o,"%c",mas[i]);}




return 0;
}
