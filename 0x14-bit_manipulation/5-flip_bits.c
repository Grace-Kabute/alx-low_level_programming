#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first input
 * @m: second input
 * Return: bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int new;
	unsigned long int old = n ^ m;

	for (j = 33; j >= 0; j--)
	{
		new = old >> j;
		if (new & 1)
			count++;
	}

	return (count);
}
