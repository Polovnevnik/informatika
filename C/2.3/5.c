#include <stdio.h>
#include <math.h>


int main ()
  {
    int x1,y1,x2,y2,x3,y3, l12,l23 , l13;// l-все длины в квадрате (не имеет смысла искать корень) ,x и y - все координаты
    printf ("Введите координаты первой точки треугольника \n");
    scanf ("%d %d", &x1, &y1);
    printf ("Введите координаты второй точки треугольника \n");
    scanf ("%d %d", &x2, &y2);
    printf ("Введите координаты второй точки треугольника \n");
    scanf ("%d %d", &x3, &y3);
    l12=pow((x2-x1),2)+ pow((y2-y1),2);
    l13=pow((x3-x1),2)+ pow((y3-y1),2);
    l23=pow((x3-x2),2)+ pow((y3-y2),2);
    if ((l12==l13+l23) || (l13==l23+l12) || (l23==l12+l13))
  { printf ("Данный треугольник является прямоугольным \n");}

 else printf ("Данный треугольник не является прямоугольным \n");    
    
   

 

return 0;
}
 
