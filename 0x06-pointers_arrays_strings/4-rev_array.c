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

	for (i = 0; i <  n / 2 ; i++)
	{
		h = a[i];
		a[i] = a[n - i -1];
		a[n - i - 1] = h;
	}
}
