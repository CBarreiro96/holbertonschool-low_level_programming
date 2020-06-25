#include "holberton.h"
/**
 *reverse_array - Invert array
 *@a:Pointer type of integer
 *@n:variable type of integer
 */
void reverse_array(int *a, int n)
{
	int h;
	int i;

	for (i = 0, n--; i < = n / 2 ; n--, i++)
	{
		h = a[i];
		a[i] = a[n];
		a[n] = h;
	}
}
