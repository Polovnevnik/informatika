#include <stdio.h>




int prov (char mas ,int j);
 
int main(void)
{
    char mas,mas1[255];
    
    int vr, i=0,j=0,k=0,b=0,s[255],r,vrr=0;
    printf("Пожалуйста, введите произвольную строку .Чтобы закончить ввод введите знак = : ");
    
 do {
   mas =getchar();
    if (mas=='='){break;}
   mas1[i]=mas ;
   i=i+1;
   }
  while (mas!= '=');
 
  k=i;
  
  for (j=0;j<k;j++)
   { vr=prov(mas1[j],j);
     if (vr==2){vrr=1;break;}
     if (vr==1){vrr=1;}
     if (vr==0){vrr=0;}
           }
if (vrr==0){printf("Правильное раставление скобок");}
if (vrr==1){printf("Неправильное раставление скобок");}

printf("\n");


return 0;
}


int prov (char mas,int j)
  { 
int i,p1,pr1,p2,pr2,pr3,p3;
if (j==0) {i=0;}
 
     if ((mas=='(')&&(i==0)) {i=1;return 1;}
     if ((mas=='(')&&(i!=0)) {return 2;}
     if ((mas==')')&&(i==1)) {i=0;return 0;}
     if ((mas==')')&&(i!=1)) {return 2;}
     
     if ((mas=='[')&&(i==0)) {i=2;return 1;}
     if ((mas=='[')&&(i!=0)) {return 2;}
     if ((mas==']')&&(i==2)) {i=0;return 0;}
     if ((mas==']')&&(i!=2)) {return 2;}
     
     if ((mas=='{')&&(i==0)) {i=3;return 1;}
     if ((mas=='{')&&(i!=0)) {return 2;}
     if ((mas=='}')&&(i==3)) {i=0;return 0;}
     if ((mas=='}')&&(i!=3)) {return 2;}
     
      if ((mas=='<')&&(i==0)) {i=4;return 1;}
     if ((mas=='<')&&(i!=0)) {return 2;}
     if ((mas=='>')&&(i==4)) {i=0;return 0;}
     if ((mas=='>')&&(i!=4)) {return 2;}
   
    if ((mas=='"')&&(pr1!=100)&&(i==0)) {p1=1;i=4;pr1=100;return 1;}   //pr1 - если кавычки вводятся первый раз в строке
    if ((mas=='"')&&(i==4)&&(p1==1)&&(pr1=100)) {i=0;p1=0;return 0;}    //p1=1   если кавычки открыты
    if ((mas=='"')&&(i==0)&&(p1==0)&&(pr1=100)) {i=4;p1=1;return 1;}
     if ((mas=='"')&&(i!=0)&&(p1==0)){return 2;}
   
     if ((mas=='`')&&(pr2!=100)&&(i==0)) {p2=1;i=5;pr2=100;return 1;}   //pr2 - если ` вводятся первый раз в строке
     if ((mas=='`')&&(i==5)&&(p2==1)&&(pr2=100)) {i=0;p2=0;return 0;}    //p2=1   если ` открыты
     if ((mas=='`')&&(i==0)&&(p2==0)&&(pr2=100)) {i=5;p2=1;return 1;}
     if ((mas=='`')&&(i!=5)) {return 2;}
     
   if ((mas==39)&&(pr3!=100)&&(i==0)) {p3=1;i=6;pr3=100;return 1;}   //pr3 - если ' вводятся первый раз в строке
     if ((mas==39)&&(i==6)&&(p3==1)&&(pr3=100)) {i=0;p3=0;return 0;}    //p3=1   если ' открыты
     if ((mas==39)&&(i==0)&&(p3==0)&&(pr3=100)) {i=6;p3=1;return 1;}
     if ((mas==39)&&(i!=6)) {return 2;}

   
  
   }
