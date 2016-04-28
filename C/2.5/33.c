#include <stdio.h>


void srav (char mas1[],char mas2[],int k);

int main ()
 { 
   int i=0,j=0,y=0,k=0;//k-количество букв , вместе с полследней точкой
char mas,mas1[255],mas2[255];
char iz[]="qwertyuiopasdfghjklzxcvbnm`~!@#$%^&*(){}[];'\"\\/,.<>";

printf("Введите строку.Когда закончите писать введите точку(.) и нажмите enter \n");
do {
mas =getchar();
mas1[i]=mas ;
i=i+1;
k=k+1;
} while (mas != '.');
printf ("%d \n",k);//
srav (mas1[k],iz[52],k);


return 0;

}


void srav (char mas1[],char mas2[],int k)
{ int t=52,j,i;
   int schet[52]={0};
  for (i=0;i<k;i++)
  { for (j=0;j<=t;j++)
     { if (mas1[i]=mas2[j])
        {schet[j]=schet[j]+1;}
    }
}

 for (j=0;j<t;j++)
     { printf("%d",schet[j]);}
}   
