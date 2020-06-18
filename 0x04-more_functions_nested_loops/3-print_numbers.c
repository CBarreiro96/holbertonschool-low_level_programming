#include "holberton.h"
/**
 *print_numbers - Printf the number of 0-9
 */

void print_numbers(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
