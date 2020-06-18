#include "holberton.h"
/**
 *print_triangle - Printf triangle
 *@size: Number of type integer
 */
void print_triangle(int size)
{
	int i = 0;
	int j, x;

	if (size > 0)
	{
		while (i < size)
		{
			j = size - 1;

			while (i < j)
			{
				_putchar(' ');
				j--;
			}
			x = 0;
			while (x <= i)
			{
				_putchar('#');
				x++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
