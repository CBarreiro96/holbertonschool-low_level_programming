#include "holberton.h"
/**
*print_number - Printf number
*@n: Number of type of integer
 */
void print_number(int n)
{
	unsigned int c;

	if (n < 0)
	{
		c = n * -1;
		_putchar('-');
	}
	else
	{
		c = n;
	}
	if ((c / 10) != 0)
	{
		print_number(c / 10);
	}
	_putchar((c % 10) + '0');
}
