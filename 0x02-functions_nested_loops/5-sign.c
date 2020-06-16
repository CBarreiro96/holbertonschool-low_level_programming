#include "holberton.h"
/**
 * print_sign - Print the sign of a number.
 * @n:type of integer
 * Return: 1 if lowercase, 0 if not lowercase
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar(48);
	return (0);
}
