#include <stdio.h>

/**
*main - function that prints a string, followed by a new line
*_puts_recursion - prints out a string
*@n - pointer to a single character in string
*Return: Always 0
*/

void _puts_recursion(char *n)
{
if (*n != '\0')
{
putchar(*n);
_puts_recursion(n + 1);
}
else
{
putchar('\n');
}
}
