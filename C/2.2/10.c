#include <stdio.h>

int main ()

 { printf (" Ниже представлены количества байт , которые отводятся под каждый базовый тип данных\n");
    printf ("Количествой байт , отводящихся под тип int=%zd  \n",    sizeof(int));
    printf ("Количествой байт , отводящихся под тип long int=%zd \n",sizeof(long ));
    printf ("Количествой байт , отводящихся под тип long long int=%zd\n",     sizeof(long long )); 
    printf ("Количествой байт , отводящихся под тип char =%zd\n",     sizeof(char));
    printf ("Количествой байт , отводящихся под тип short int=%zd \n", sizeof(short int));
    printf ("Количествой байт , отводящихся под тип float=%zd\n", sizeof (float));
    printf ("Количествой байт , отводящихся под тип double=%zd\n", sizeof (double));
    printf ("Количествой байт , отводящихся под тип long double=%zd\n", sizeof(long double));
   // printf ("Количествой байт , отводящихся под тип int=%zd\n");
return 0;
}
