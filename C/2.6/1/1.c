#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ()
 {  
    char **mas1;
    char *mas2;
    FILE *f;
    FILE *o;
     int k=1,*vs,ch=0,j,d,i,r;
    char str[10000];
    f=fopen("start.txt","r");
    o=fopen("finish.txt","w"); 
    fscanf (f,"%s",str);
    mas1= (char**)malloc( sizeof(char*));
    mas1[0] = (char*)malloc(sizeof(char) * strlen(str) + 1);   
    strcpy(mas1[0], str);               
    
    vs= (int*)malloc(sizeof(int));
    vs[0] = 1; 

   while (fscanf (f,"%s",str) !=EOF )
     {   for(i = 0; i <k ; ++i)
	    { if(strcmp(mas1[i],str) == 0)
		{	vs[i]=vs[i]+1;
			ch = 1;
		  }
	      }
      if(!ch)
	    {
		k++;
		mas1 = (char**)realloc(mas1, k * sizeof(char*));
		mas1[k-1] = (char*)malloc(sizeof(char) * strlen(str) + 1);
		strcpy(mas1[k-1], str);

		vs= (int*)realloc(vs, sizeof(int) * k);
		vs[k-1] = 1;
	}
	ch = 0;
}

 
fprintf(o, "Количество уникальных слов в данном тексте %d \n",k);
        for (j=0; j<=k-1;j++)
          {
            for (i=0;i<=k-j-1;i++)
              {
	           if (vs[i] > vs[i+1])
	             {
		        r = vs[i];
		         mas2 = mas1[i]; 
	             vs[i]=vs[i+1];
	             mas1[i]=mas1[i+1];
	             mas1[i+1]=mas2;
	             vs[i+1] = r;
                 }
              }

        fprintf(o, "%1.d) %14s %17d\n",j+1,mas1[i],vs[i]);
        }
    fclose(f); 
    fclose(o);
    
    return 0;
}
