#include "main.h"

/**
*factorial - gives factorial of an int
*@n: input
*Return: Always 0
*/

int factorial(int n)
{
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
