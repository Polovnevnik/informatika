#include <stdio.h>

int main(void) {

int dayin,year,month,dayout;
printf("Введите количество дней : \n");
scanf ("%d", &dayin) ;
year=dayin/365; //Пользуюсь тем, что int -целочисленный оператор
month=(dayin - 365*year)/30 ; //30 - как среднее количесвтодней в месяцах
dayout=(dayin- 365*year - 30*month);
printf ("%d дней , это %d лет , %d месяцев и %d дней \n", dayin,year,month,dayout);
return 0;
}
