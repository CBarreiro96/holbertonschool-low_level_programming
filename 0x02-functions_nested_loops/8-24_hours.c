#include "holberton.h"
/**
 *jack_bauer - outputting the time from 00:00 to 23:59
 *Description: printing out all minutes of the time till 23:59
 *Return: no value is returned
 *
 */

void jack_bauer(void)
{
	int i, j, a, b, c, d;

	i = 0;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			a = i / 10;
			b = i % 10;
			c = j / 10;
			d = j % 10;

			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(':');
			_putchar(c + '0');
			_putchar(d + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
