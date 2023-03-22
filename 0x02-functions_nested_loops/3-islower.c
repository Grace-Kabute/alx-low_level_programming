#include "main.h"
/**
 * _islower - print alphabets in lowercase
 * 0c: parameter to be printed
 * Return: 1 if lowercase otherwise 0
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
