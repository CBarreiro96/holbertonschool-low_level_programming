#include "holberton.h"
/**
 *print_line - printf character _
 *@n: Numbre type of integer
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
