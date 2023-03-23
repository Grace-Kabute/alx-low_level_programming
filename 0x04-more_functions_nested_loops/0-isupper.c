#include "main.h"
/**
 * _isupper - checks for lowercase characters
 * @c: The character to be checked
 * Return: 1 for uppercase character or 0 for anything else
*/
int _isipper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
