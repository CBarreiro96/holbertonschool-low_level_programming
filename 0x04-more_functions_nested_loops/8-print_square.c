#include "holberton.h"
/**
 *print_square - Printf #
 *@size: Number type of integer
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		i = 0;

		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
