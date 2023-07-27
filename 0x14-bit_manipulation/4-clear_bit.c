#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the input value
 * @index: index of bit value at which to set input to 0
 *
 * Return: 1 if success, -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 33)
		return (-1);

	*n = (~(unsigned int) 1 << index) & *n;
	return (1);
}
