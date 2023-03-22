#include "main.h"
/**
 * _islower - print alphabets in lowercase
 * parameter: parameter to be printed
 * memberc: ascii lowercase characters
 * Return: 1 if lowercase otherwise 0
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
