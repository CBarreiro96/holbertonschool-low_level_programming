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

	for (i = 0; i < n; i++)
	{
		if (i == n)
		{
			printf("%d\n", a[i]);
		}
		else
			printf("%d, ", a[i]);
	}
}
