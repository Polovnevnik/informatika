#include <stdio.h>    //Функция считающая определитель матрицы без столбца свободных коэффициентов 
#include <string.h>

float opredel (int st, float masa[st][st]);
float kofopr (int str,int st, float masa[st][st],float svob[st]);



float opredel (int st, float masa[st][st])
 { float opr=0;
   int i,j,k,t;
   float min[st-1][st-1];



  if (st==1) {opr=masa[0][0];
              return opr; }
  if (st==2) { opr=masa[0][0]*masa[1][1]-masa[0][1]*masa[1][0]; 
                return opr;}

  if(st>=3){for(i = 0; i<st; i++)	           
		 {for(j=1 ;j<st; j++)
		  {for (k=0, t=0 ; k<st; k++) 
		   {
		    if (k!=i)
			{ min[j-1][t]=masa[j][k];
			  t++;}
		    }
		 }
	       	if (i%2==0) opr=opr + masa[0][i]*opredel(st-1, min);
		
		else opr=opr - masa[0][i]*opredel(st-1, min);
				
		}
	return opr;

         }

		}






float kofopr (int str,int st, float masa[st][st],float svob[st])
 {  float kopr;
    float mas2[st][st];
   int i,j,k,t;
    for (i=0;i<st;i++)
     {for (j=0;j<st;j++)
        { mas2[i][j]=masa[i][j];}}
     for (k=0;k<st;k++)
     {mas2[k][str]=svob[k];}



     kopr=opredel(st,mas2);
     return kopr;
   
     }












