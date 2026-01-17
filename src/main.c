#include <stdio.h>

float area (float side)
{
   float a = side * side;
   return a;
}

float volume (float side)
{

   float v = side * side * side;
   return v;

}
int main()
{

   float side = 0;

   printf (" Enter the side length:");

   if(scanf("%f", &side) != 1)
   {

      printf("Error the side must be a number\n");
      return 1;

   }

   if(side < 0)
   {

      printf("Error the side cannot be negative\n");
      return 1;

   }

   float a = area(side);
   float v = volume(side);

   printf("square area: %.2f, volume: %.2f\n", a, v);

   return 0;
}