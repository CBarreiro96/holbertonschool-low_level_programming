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
	int j= n-1;

	for (i = 1; i <= j; i++)
	{
		if (i == j)
		{
			printf("%d\n", a[i]);
		}
		else
			printf("%d, ", a[i]);
	}
}
