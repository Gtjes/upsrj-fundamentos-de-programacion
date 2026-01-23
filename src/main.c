#include <stdio.h>

int is_even(int number)
{
if(number % 2 == 0)
{
return 1;
}
else
{
   return 0;
}

}

int main()

{

int number; 

printf("Ingrese un numero: ");
scanf("%d", &number);

if(is_even(number))
{
   printf("El numero es par\n");
}
else
{
   printf("El numero es impar\n");
}

return 0;

}