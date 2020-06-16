#include "holberton.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int Rect;

	if (n < 0)
	{
		Rect = -1 * (n % 10);
		_putchar(Rect + '0');
		return (Rect);
	}
	else
	{	Rect = n % 10;
		_putchar(Rect + '0');
		return (Rect);
	}
}
