#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: bit output
 * @index: input index value
 * Return: bit at the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
