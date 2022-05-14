#include <stdio.h>

int main()
{

 const double PI = 3.142;
 double radius;
 double circumference;
 double Area;
 double diamenter;


 printf("\nEnter the diameter of a circle: ");
 scanf("%lf", &diamenter);
 radius = diamenter / 2;
 circumference = 2 * PI * radius;
 Area = PI * radius * radius;
 printf("\ncircumference: %lf", circumference);
 printf("\nArea: %lf", Area);

return 0;
}