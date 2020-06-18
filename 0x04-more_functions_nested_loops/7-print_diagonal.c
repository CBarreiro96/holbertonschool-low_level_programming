#include "holberton.h"
/**
 *print_diagonal - Printf /
 *@n: Number of type integer
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n > 0)
	{
		while (i < n)
		{
			j = 0;

			while (j < i)
			{	_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	_putchar('\n');
}
