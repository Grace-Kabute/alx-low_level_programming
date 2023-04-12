#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*create_array - creates an array of chars
*main - creates an array of chars
*@size:  size of array
*@c: character
*Return: retun null if no memory otherwise return pointer str
*/

char *create_array(unsigned int size, char c)

{

char *str;

unsigned int i;


str = malloc(sizeof(char) * size);

if (size == 0 || str == NULL)

return (NULL);

for (i = 0; i < size; i++)

str[i] = c;

return (str);
}
