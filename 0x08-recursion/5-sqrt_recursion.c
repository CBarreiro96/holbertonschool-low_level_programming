#include "holberton.h"

/**
 *_sqrt_recursion -function that returns the natural square root of a number.
 *@n: Variable type of integer
 *Return: return function about natural square.
 */

int _sqrt_recursion(int n)
{
	return (Procces(n, 1));
}

/**
 *Procces - Procces about sqrt
 *@a: Variable type integer  and equal and n.
 *@i: Variable type of integer and conditional.
 *Return: It return of result about sqrt
 */

int Procces(int a, int i)
{
	int Pow = i * i;

	if(Pow == a)
		return(i);
	else if(Pow < a)
		return Procces(a, i + 1);
	else
		return (-1);
}
