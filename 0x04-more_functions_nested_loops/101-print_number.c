#include "holberton.h"
/**
 *print_number - Printf number
 *@n: Number of type of integer
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}
