#include "main.h"
/**
 * jack_bauer - print 24 hours time
 * return: always 0
*/
void jack_bauer(void)
{
int i;
int j;

for (i = 0 ; i < 24 ; i++)
{
for (j = 0 ; j < 60 ; j++)
{
_putchar(i / 10 + '0');/*prints the first number*/
_putchar(i % 10 + '0');/*print the last number*/
_putchar(':');
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
_putchar('\n');
}
}
}
