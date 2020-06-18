#include "holberton.h"
/**
 *more_numbers - repeat some number
 */
void more_numbers(void)
{
	int i = 0;
	int j, a, b;

	while (i < 11)
	{
		j = 0;
		while (j < 15)
		{
			a = j / 10;
			b = j % 10;
			if (j < 10)
				_putchar('0' + j);
			else if (j > 10)
			{
				_putchar('0' + a);
				_putchar('0' + b);
			}
			j++;
		}

		_putchar('\n');
		i++;
	}

}
