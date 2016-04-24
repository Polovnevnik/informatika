#include <string.h>
#include <stdio.h>


int main ()
 {
     char string[500];              
    printf ("Vvedite stroku : \n");
    scanf ("%s",string);
    printf ("Размер данной строки в байтах = %zd \n ", strlen(string)+1); //1 добаляется из-за того , что сама функция scanf в конце массива пишет символ '\0' , чтобы сделать содержание массива строкой
                                                                          //+одна ячейка массива занимает 1 байт памяти
  return 0 ;
}
  
