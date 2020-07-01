#include "holberton.h"
/**
 *factorial - function that returns the factorial of a given number.
 *@n: Variable type of integer
 *Return: return diferent variable depend of condition.
 */
int factorial(int n)
{
	if (n <= 1)
	{
		if (n < 0)
			return (-1);
		else
			return (1);
	}
	return (n * factorial(n - 1));
}
