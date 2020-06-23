#include "holberton.h"
#include <stdio.h>
/**
 *print_array - Printf array
 *@a: pointer typo of a
 *@n: size of array
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (n--; n >= 0 ; i++, n--)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
