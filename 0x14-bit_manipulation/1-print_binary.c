#include "main.h"

/**
 * print_binary - a function that prints the binary
 * representation of a number.
 * @n: input value, to be represented
 */
void print_binary(unsigned long int n)
{
	unsigned long int input;
	int j, count = 0;

	for (j = 63; j >= 0; j--)
	{
		input = n >> j;

		if (input & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
