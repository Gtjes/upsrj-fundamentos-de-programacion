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

   if(scanf("%f", &side) != 1)
   {
      printf(" Error the side must be a number\n");

      return 1;
   }
   if( side < 0 )
   {
      printf("Errror the number cannot be negative\n");

      return 1;
   }

   printf (" Ententer the side length:");

   scanf("%f", &side);
   
   float a = area(side);
   float v = volume(side);

   printf("square area: %f, volume: %f\n", a, v);

   return 0;
}