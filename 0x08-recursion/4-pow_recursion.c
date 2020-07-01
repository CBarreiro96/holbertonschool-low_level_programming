#include "holberton.h"
/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x:Variable type of integer.
 *@y:Variable type of integer.
 *Return: result x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int c = 0;

	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);

	if (y)
	{
		y--;
		c = x * _pow_recursion(x, y);
	}
	return (c);
}
