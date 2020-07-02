#include "holberton.h"
/**
 *is_prime_number - Returns 1 if the input integer is a prime number.
 *@n: Variable type of integer.
 *Return: return result.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	else
		return (Primes(n, 1, 0));
}

/**
 *Primes - Help function  about  is_prime
 *@x: Variable type integer.
 *@i: Variable type integer.
 *@j: Variable type integer.
 *Return:return variable about function.
 */

int Primes(int x, int i, int j)
{
	if (x % i == 0)
	{
		j++;
	}
	if (j == 2 && i == x)
	{
		return (1);
	}
	if (i < x)
	{

		return (Primes(x, i + 1, j));
	}
	else
		return (0);
}
