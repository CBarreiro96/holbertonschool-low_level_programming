#include "holberton.h"
#include <stdio.h>
/**
 *print_array - Printf array
 *@a: pointer typo of a
 *@n: size of array
 */
void print_array(int *a, int n)
{
	int i;
	int c = 0;

	for (i = 0; i < n ; i++)
	{
		c += 1;
		if (c == n)
		{
			printf("%d\n", a[i]);
		}
		else
			printf("%d, ", a[i]);
	}
}
