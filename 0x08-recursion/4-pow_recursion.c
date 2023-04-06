#include "main.h"

/**
*_pow_recursion - prints the power of an int
*@x: base input
*@y: power input
*Return: Always 0
*/

int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
{
return (x * _pow_recursion(x, y - 1));
}
}
