#include "holberton.h"
/**
 *swap_int - punter
 *@a:punter type of integer.
 *@b: punter type of integer.
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
